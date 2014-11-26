//如何在程序中使用系统内置或自定义变量（可以是在程序中扩展的变量，也可以是在配置文件上下文中设置的变量）?


//变量对象，用于接收变量数据和长度 
ngx_http_variable_value_t  *vv;
//代表变量名称的字符串对象
ngx_str_t                   variable_name;	

//变量hash值
ngx_uint_t                  hash_key;

//变量名称
const u_char                my_variable_name[] = "scs_machine_info";

//构建variable_name	
variable_name.data = (u_char *)my_variable_name;                                                                                                                      
variable_name.len = sizeof(my_variable_name) -1;

//计算变量hash值
hash_key = ngx_hash_key((u_char *)my_variable_name, sizeof(my_variable_name) -1);

//获取变量
vv = ngx_http_get_variable(r, &variable_name, hash_key);

//判断变量是否存在
if (vv == NULL || vv->not_found || vv->len==0) {                                                                                                                      
  ngx_log_error(NGX_LOG_ERR, r->connection->log, 0, "%s variable is not found!", my_variable_name);
  return NGX_HTTP_INTERNAL_SERVER_ERROR;
}
	
#使用变量数据	
vv->data
	
#使用变量长度
vv->len


