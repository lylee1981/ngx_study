## Info
记录使用nginx过程中的心得和经验   
排名没有先后顺序  
使用过程中，优先参考官网，[这里](http://wiki.nginx.org) 

## Command Use

`client_header_timeout 10;` #nginx读取客户端发送请求头的超时时间。在指定时间过后，如果客户端仍然没有发送请求头，则触发超时

`client_body_timeout 10;` #nginx读取客户端请求体的超时时间。在指定时间过后，，如果客户端仍然没有发送请求头，则触发超时。

`proxy_connect_timeout 5;` #nginx作为反向代理，连接上游服务器的超时时间。

`proxy_read_timeout 5;` #nginx每一次从上游服务器读取数据的超时时间。如果在指定时间内，数据仍然未到达，则触发超时。

`proxy_send_timeout 5;` #nginx向上游服务器发送数据的超时时间。如果上游服务器迟迟不接收数据，在指定时间过后，触发超时。

`send_timeout 10;` #nginx向下游服务器发送数据的超时时间。如果下游服务器迟迟不接收数据，在指定时间过后，触发超时。



