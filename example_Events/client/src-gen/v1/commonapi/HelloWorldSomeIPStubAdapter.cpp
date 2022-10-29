/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.someip 3.1.12.v201706201046.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <v1/commonapi/HelloWorldSomeIPStubAdapter.hpp>
#include <v1/commonapi/HelloWorld.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/SomeIP/AddressTranslator.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace commonapi {

std::shared_ptr<CommonAPI::SomeIP::StubAdapter> createHelloWorldSomeIPStubAdapter(
                   const CommonAPI::SomeIP::Address &_address,
                   const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
                   const std::shared_ptr<CommonAPI::StubBase> &_stub) {
    return std::make_shared< HelloWorldSomeIPStubAdapter<::v1::commonapi::HelloWorldStub>>(_address, _connection, _stub);
}

void initializeHelloWorldSomeIPStubAdapter() {
    CommonAPI::SomeIP::AddressTranslator::get()->insert(
        "local:commonapi.HelloWorld:v1_0:test",
         0x1234, 0x5678, 1, 0);
    CommonAPI::SomeIP::Factory::get()->registerStubAdapterCreateMethod(
        HelloWorld::getInterface(),
        &createHelloWorldSomeIPStubAdapter);
}

INITIALIZER(registerHelloWorldSomeIPStubAdapter) {
    CommonAPI::SomeIP::Factory::get()->registerInterface(initializeHelloWorldSomeIPStubAdapter);
}
} // namespace commonapi
} // namespace v1
