(function() {
  const accordion = document.querySelector(".sp-why__accordion");
  const button = el => el.querySelector(".sp-why__title-button");

  const collapse = el => {
    // Remove animation-end attribute
    el.setAttribute("data-animating", true);

    // Make the class inactive
    el.classList.add("sp-why__panel--inactive");

    // Mark ARIA collapsed
    button(el).setAttribute("aria-expanded", false);
  };

  const expand = el => {
    // Remove animation-end attribute
    el.setAttribute("data-animating", true);

    // Deactivate currently active panel
    const active = accordion.querySelector(
      ".sp-why__panel:not(.sp-why__panel--inactive)"
    );
    collapse(active);

    // Make class active
    el.classList.remove("sp-why__panel--inactive");

    // Mark ARIA expanded
    button(el).setAttribute("aria-expanded", true);
  };

  // Apply magic to all of the accordion panels...
  Array.from(accordion.querySelectorAll(".sp-why__panel")).forEach(el => {
    // Turn the title into a button so it's accessible
    const button = document.createElement("button");
    button.setAttribute("type", "button");
    button.classList.add("sp-why__title-button");

    const title = el.querySelector(".sp-why__panel-title");
    const text = title.firstChild;

    title.replaceChild(button, text);
    button.appendChild(text);

    // Add a hook to apply styles after a transition has ended
    el.addEventListener("transitionend", () => {
      el.removeAttribute("data-animating");
    });

    // Collapse all but the last panels
    if (el.nextElementSibling) {
      collapse(el);
    }

    // Expand panels when clicked on
    el.addEventListener("click", () => {
      button.focus();
      expand(el);
    });
  });
})();