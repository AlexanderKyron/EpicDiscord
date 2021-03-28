#ifndef DISCORDCLIENT_H
#define DISCORDCLIENT_H
#include <string>
#include <QJsonObject>
#include <sleepy_discord/client.h>
#include <sleepy_discord/sleepy_discord.h>
class DiscordClient : public SleepyDiscord::DiscordClient
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
