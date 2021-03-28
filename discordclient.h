#ifndef DISCORDCLIENT_H
#define DISCORDCLIENT_H
#include <string>
#include <QJsonObject>
class DiscordClient
{
public:
    DiscordClient();
 //   ~DiscordClient();
public:
    bool Connect(std::string token, std::string &auth);
  //  bool SendMessage(std::string message);
  //  QJsonObject ReceiveMessage();
};

#endif // DISCORDCLIENT_H
