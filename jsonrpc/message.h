#ifndef MESSAGE_H
#define MESSAGE_H

namespace icinga
{

class I2_JSONRPC_API Message
{
private:
	Dictionary::Ptr m_Dictionary;

public:
	Message(void);
	Message(const Dictionary::Ptr& dictionary);
	Message(const Message& message);

	Dictionary::Ptr GetDictionary(void) const;

	bool GetPropertyString(string key, string *value) const;
	void SetPropertyString(string key, const string& value);

	bool GetPropertyInteger(string key, long *value) const;
	void SetPropertyInteger(string key, long value);

	bool GetPropertyMessage(string key, Message *value) const;
	void SetPropertyMessage(string key, const Message& value);
};

}

#endif /* MESSAGE_H */