#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char *html5_tags[] = {
    "<!DOCTYPE>", "<html>", "<head>", "<title>", "<meta>", "<link>", "<style>", "<script>", "<body>",
        "<article>", "<section>", "<nav>", "<aside>", "<header>", "<footer>", "<main>",
        "<h1>", "<h2>", "<h3>", "<h4>", "<h5>", "<h6>",
        "<p>", "<br>", "<hr>", "<blockquote>", "<pre>", "<code>",
        "<a>", "<img>", "<figure>", "<figcaption>",
        "<ul>", "<ol>", "<li>", "<dl>", "<dt>", "<dd>",
        "<table>", "<thead>", "<tbody>", "<tfoot>", "<tr>", "<th>", "<td>",
        "<form>", "<input>", "<textarea>", "<button>", "<select>", "<option>", "<label>", "<fieldset>", "<legend>",
        "<video>", "<audio>", "<source>", "<canvas>", "<svg>",
        "<iframe>", "<embed>", "<object>", "<param>",
        "<details>", "<summary>", "<mark>", "<time>", "<progress>", "<meter>", "<output>", "<dialog>", "<template>", "<noscript>"
};
int html5_length = sizeof(html5_tags) / sizeof(html5_tags[0]);

const char *html_tree[] = {""};
int html_length = sizeof(html_tree) / sizeof(html_tree[0]); 

void scan_tags(tag) {
    for (int i = 0; i < html5_length.length; i++) {
        if (strcasecmp(tag, html5_tags[i]) == 0) {
            strcpy(html_tree[html_length++], tag);
        } else {
            return 1;
        }
    }
    return html_tree;
};