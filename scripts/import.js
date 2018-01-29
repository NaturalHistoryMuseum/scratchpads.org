const fs = require('fs')
const http = require('http');
const csv = require('csv')
const moment = require('moment')

const news = fs.readFileSync(require.resolve('./news-export.csv'));

csv.parse(news, (err, data) => {
  let p = Promise.resolve();

  data.slice(1)
    .forEach(([ title, body, dateStr], ix) => {
      const date = moment(dateStr, 'dddd, MMMM D YYYY - HH:mm');

      const slug = title.toLowerCase()
          .replace(/\./g, '')
          .replace(/\W+/g, '-')
          .replace(/(^|-)(a|with|to|of|on|in|the|from|for|than|before|-)+(-|$)/g, '-')
          .replace(/(-$)|(^-)/g, '')

        fs.writeFileSync('_posts/' + date.format('YYYY-MM-DD') + '-' + slug + '.md',
`---
title: "${title}"
date: ${date.format('YYYY-MM-DD HH:mm:ss')}
---

${body.replace(/\n(?!-)/g, '\n\n').replace(/([\w:])(http:)/g, '$1 $2')}`)
    })

    p.catch(e => console.log(e))
})