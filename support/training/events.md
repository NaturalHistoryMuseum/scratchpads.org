# Courses

**There are no upcoming courses**

## Past courses
<ul id="sp-events-past" class="sp-events__courses">
{% for event in site.events %}
  <li class="sp-events__course">
    <div>
      {{ event.training-date | default: event.date }}
      (<a href="{{ event.url }}">View details</a>)
    </div>
    <div><b>{{ event.location }}</b></div>
    <div>{{ event.short-description }}</div>
  </li>
{% endfor %}
</ul>