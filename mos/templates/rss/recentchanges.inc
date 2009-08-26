<h1><a href="{{ HOS_WIKI_CHANGE_URL }}">Zadnje spremembe</a></h1>
<p>/hm pojma nimam, kaj sem pride/</p>
{% for change in latestchanges %}
    <a href="{{ change.link }}">{{ change.title }}</a><br/><small>- {{ change.author }}</small><br/>
{% endfor %}
