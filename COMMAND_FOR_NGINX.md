## Info
command list 
- start
- stop
- reload
- binary upgrade
- regenerate log

## Command Manual

**nginx start**

`/usr/local/nginx/sbin/nginx`

**nginx graceful stop**

`/usr/local/nginx/sbin/nginx -s quit`

**nginx reload**

`/usr/local/nginx/sbin/nginx -s reload`

**nginx regenerate log**

`
mypid='/usr/local/nginx/logs/nginx.pid' 
kill -USR1 `cat $mypid` 
`
