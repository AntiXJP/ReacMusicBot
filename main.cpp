#include <stdio.h>
#include <string>
#include <tgbot/tgbot.h>
#include <iostream>
#include "data.h"
using namespace std;
int main()
{

    TgBot::Bot bot("PLACE YOUR TOKEN HERE");
        bot.getEvents().onUnknownCommand( [&bot](TgBot::Message::Ptr message) {
        return 0;
    });
    bot.getEvents().onCommand("start", [&bot](TgBot::Message::Ptr message) {
        bot.getApi().sendMessage(message->chat->id, "Hi!");
    });

    bot.getEvents().onCommand("qfh", [&bot](TgBot::Message::Ptr message) {
        bot.getApi().sendMessage(message->chat->id, qfh);
    });

    bot.getEvents().onCommand("nszw", [&bot](TgBot::Message::Ptr message) {
        bot.getApi().sendMessage(message->chat->id, nszw);
    });

    bot.getEvents().onCommand("hhdsge", [&bot](TgBot::Message::Ptr message) {
        bot.getApi().sendMessage(message->chat->id, hhdsge);
    });

    bot.getEvents().onCommand("qddisco", [&bot](TgBot::Message::Ptr message) {
        bot.getApi().sendMessage(message->chat->id, qddisco);
    });

    bot.getEvents().onCommand("ccw", [&bot](TgBot::Message::Ptr message) {
        bot.getApi().sendMessage(message->chat->id, ccw);
    });
    bot.getEvents().onCommand("mghdzl", [&bot](TgBot::Message::Ptr message) {
        bot.getApi().sendMessage(message->chat->id, mghdzl);
    });
    bot.getEvents().onCommand("cqxg", [&bot](TgBot::Message::Ptr message) {
        bot.getApi().sendMessage(message->chat->id, cqxg);
    });
    bot.getEvents().onCommand("yrggxg", [&bot](TgBot::Message::Ptr message) {
        bot.getApi().sendMessage(message->chat->id, yrggxg);
    });
    bot.getEvents().onCommand("nc", [&bot](TgBot::Message::Ptr message) {
        bot.getApi().sendMessage(message->chat->id, nc);
    });
    bot.getEvents().onCommand("tsky", [&bot](TgBot::Message::Ptr message) {
        bot.getApi().sendMessage(message->chat->id, tsky);
    });
    bot.getEvents().onCommand("njxldsl", [&bot](TgBot::Message::Ptr message) {
        bot.getApi().sendMessage(message->chat->id, njxldsl);
    });
    bot.getEvents().onCommand("help", [&bot](TgBot::Message::Ptr message) {
        bot.getApi().sendMessage(message->chat->id, helpmsg);
    });

    try
    {
        cout << bot.getApi().getMe()->username.c_str() << endl;
        TgBot::TgLongPoll longPoll(bot);
        while (true)
        {
            longPoll.start();
        }
    }
    catch (TgBot::TgException &e)
    {
        cout << e.what() << endl;
    }
    return 0;
}
