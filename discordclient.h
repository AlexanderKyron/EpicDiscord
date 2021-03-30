#ifndef DISCORDCLIENT_H
#define DISCORDCLIENT_H
#include <string>
#include <QJsonObject>
#include <sleepy_discord/sleepy_discord.h>
class DiscordClient  : public SleepyDiscord::DiscordClient
{
public:
    using SleepyDiscord::DiscordClient::DiscordClient;
    DiscordClient();
    ~DiscordClient();
public:
  //  bool SendMessage(std::string message);
  //  QJsonObject ReceiveMessage();
};

#endif // DISCORDCLIENT_H
