#include <iostream>
#include <Poco/Net/HttpClientSession.h>
#include <Poco/Net/HttpResponse.h>
#include <Poco/Net/HttpMessage.h>
#include <Poco/Uri.h>
using namespace std;
using namespace Poco;
using namespace Poco::Net;
int main()
{
    // create a Uri
    URI uri("http://httpbin.org");
    // create a session
    HttpClientSession session(uri.getHost(), uri.getPort());
    // set connection to keep Alive
    session.setKeepAlive(true);
    // choose the http Request Method
    HttpRequest request(HTTPRequest::HTTP_GET, "/", HTTPMessage::HTTP_1_1);
    // add header
    request.add("User agent", "Mozila/5.0");
    // send the request
    session.sendRequest(request);
    // receive response
    HTTPResponse response;
    istream &page = session.receiveResponse(response);
    // store receive body
    string receive = "";
    string temp;
    while (getline(&page, temp))
    {
        receive += temp + "\n";
    }
    cout << receive << endl;
    return 0;
}
