(function () {
  const accordion = document.querySelector('.sp-why__accordion');

  Array.from(accordion.querySelectorAll('.sp-why__panel:not(:last-of-type)')).forEach(
    el => el.classList.add('sp-why__panel--inactive')
  )
})()
