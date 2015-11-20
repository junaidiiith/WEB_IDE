[{
  "method_name" : "clone",
  "return_value" : "int",
  "arguments" : "int (*__fn) (void *__arg), void *__child_stack, int __flags, void *__arg, ..."
},
{
  "method_name" : "unshare",
  "return_value" : "int",
  "arguments" : "int __flags"
},
{
  "method_name" : "sched_getcpu",
  "return_value" : "int",
  "arguments" : "void"
},
{
  "method_name" : "setns",
  "return_value" : "int",
  "arguments" : "int __fd, int __nstype"
},
{
  "method_name" : "__sched_cpucount",
  "return_value" : "int",
  "arguments" : "size_t __setsize, const cpu_set_t *__setp"
},
{
  "method_name" : "__sched_cpualloc",
  "return_value" : "cpu_set_t*",
  "arguments" : "size_t __count"
},
{
  "method_name" : "__sched_cpufree",
  "return_value" : "void",
  "arguments" : "cpu_set_t *__set"
}]