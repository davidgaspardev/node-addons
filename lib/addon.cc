#include <node.h>

void Sum(const v8::FunctionCallbackInfo<v8::Value>& args) {

	// HERE: It is getting argments
	v8::Isolate* isolate = args.GetIsolate();

	int i;
	double a = 3.1415926, b = 2.718;
	for(i = 0; i < 1000000000; i++) {
		a += b;
	}

	// HERE: It is converting the value to return
	auto total = v8::Number::New(isolate, a);

	// HERE: It is returning one value
	args.GetReturnValue().Set(total);
}

// Build module
void Initialize(v8::Local<v8::Object> exports) {
	NODE_SET_METHOD(exports, "sum", Sum);
}

// Link to the node.js
NODE_MODULE(addon, Initialize);