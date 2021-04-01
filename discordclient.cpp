#include "discordclient.h"
#include "mainwindow.h"
#define SLEEPY_ONE_THREAD // only use one thread because run() needs to be ran in its own thread
DiscordClient* DiscordClient::instance = nullptr;

DiscordClient::DiscordClient()
{

}

DiscordClient::~DiscordClient() {
    std::cout << "Destroyed discordclient" << std::endl;
}

DiscordClient* DiscordClient::GetOrCreateClient(std::string token, bool isBot, MainWindow* mainWindow)
{
    if(!instance) {
        instance = new DiscordClient(token,3,isBot);
        instance->m_mainWindow = mainWindow;
    }
    return instance;
}

DiscordClient* DiscordClient::CreateClient(std::string token, bool isBot, MainWindow* mainWindow)
{
    if(instance) {
        delete instance;
    }
    instance = new DiscordClient(token, 3, isBot);
    instance->m_mainWindow = mainWindow;
    return instance;
}




DiscordClient* DiscordClient::GetClient()
{
    if(!instance) {
        return nullptr;
    }
    return instance;
}


