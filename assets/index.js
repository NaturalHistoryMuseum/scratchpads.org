(() => {
  const getLinkFor = panel => document.querySelector(`[href="#${panel.id}"]`);
  const observeIntersection = entries => {
    entries.forEach(entry => {
      const link = getLinkFor(entry.target);

      if(!link) return;

      if (entry.isIntersecting) {
        link.setAttribute('data-active', '');
      } else {
        link.removeAttribute('data-active')
      }
    })
  }

  Array.from(document.querySelectorAll('[data-slider]')).forEach(
    slider => {
      const intersectionObserver = new IntersectionObserver(observeIntersection, {
        root: slider
      })

      Array.from(slider.querySelectorAll('[id]')).forEach(panel => {
        intersectionObserver.observe(panel);
        getLinkFor(panel).addEventListener('click', event => {
          slider.scrollLeft = panel.offsetLeft - slider.offsetLeft;
          event.preventDefault();
        })
      })
    }
  )
})()