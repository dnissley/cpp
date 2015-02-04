#include <node.h>
#include <v8.h>

using namespace v8;

Handle<Value> Method(const Arguments& args) {
  HandleScope scope;
  return scope.Close(String::New("Hello, world!"));
}

void init(Handle<Object> exports) {
  exports->Set(String::NewSymbol("foo"), FunctionTemplate::New(Method)->GetFunction());
}

NODE_MODULE(hello, init)
