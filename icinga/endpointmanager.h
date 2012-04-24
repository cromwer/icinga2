#ifndef ENDPOINTMANAGER_H
#define ENDPOINTMANAGER_H

namespace icinga
{

struct I2_ICINGA_API NewEndpointEventArgs : public EventArgs
{
	icinga::Endpoint::Ptr Endpoint;
};

class I2_ICINGA_API EndpointManager : public Object
{
	shared_ptr<SSL_CTX> m_SSLContext;
	list<JsonRpcServer::Ptr> m_Servers;
	list<Endpoint::Ptr> m_Endpoints;

	void RegisterServer(JsonRpcServer::Ptr server);
	void UnregisterServer(JsonRpcServer::Ptr server);

	int NewClientHandler(const NewClientEventArgs& ncea);

	int NewMethodSinkHandler(const NewMethodEventArgs& ea);
	int NewMethodSourceHandler(const NewMethodEventArgs& ea);

public:
	typedef shared_ptr<EndpointManager> Ptr;
	typedef weak_ptr<EndpointManager> WeakPtr;

	EndpointManager(shared_ptr<SSL_CTX> sslContext);

	void AddListener(unsigned short port);
	void AddConnection(string host, unsigned short port);

	void RegisterEndpoint(Endpoint::Ptr endpoint);
	void UnregisterEndpoint(Endpoint::Ptr endpoint);

	void SendUnicastRequest(Endpoint::Ptr sender, Endpoint::Ptr recipient, const JsonRpcRequest& request, bool fromLocal = true);
	void SendAnycastRequest(Endpoint::Ptr sender, const JsonRpcRequest& request, bool fromLocal = true);
	void SendMulticastRequest(Endpoint::Ptr sender, const JsonRpcRequest& request, bool fromLocal = true);

	void ForeachEndpoint(function<int (const NewEndpointEventArgs&)> callback);

	Event<NewEndpointEventArgs> OnNewEndpoint;
};

}

#endif /* ENDPOINTMANAGER_H */