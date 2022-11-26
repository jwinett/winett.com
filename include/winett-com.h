#define __BEGIN_PAGE( __TITLE__ ) <!DOCTYPE html> \
    <html lang="en"> \
    <head> \
        <title> __TITLE__ </title> \
        <meta charset="utf-8"> \
        <meta name = "viewport" content = "width=device-width"> \
        <style> \
           html { \
            font-family: 'Gill Sans', 'Gill Sans MT', Calibri, 'Trebuchet MS', sans-serif; \
            background-color: darkslategray; \
            color: white; \
            font-size: 120%; \
           } \
           a { \
            color: cyan; \
            text-decoration: none; \
            font-weight: bold; \
            } \
           a:hover { \
           text-decoration: underline; \
           } \
           .respondnow{ max-width: 100 %; display: inline-block; vertical-align: top; } \
           .sux{ \
            font-size: 200%; \
            font-weight: 100; \
            color: orange; \
            } \
        </style> \
    </head> \
    <body> 

#define __END_PAGE(__TIMESTAMP__) \
    <pre>__TIMESTAMP__</pre> \
    </body> \
    </html>






