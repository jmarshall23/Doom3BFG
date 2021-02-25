// Bot_Chat.cpp
//

#include "precompiled.h"
#include "../Game_local.h"

const char *bot_kill_insult[] = {
	"Try aiming next time %s",
	"Trust me when I say this %s, you suck.",
	"Maybe you should go back to go cart racing %s?",
	"Your technique reminds me of a story %s, a very dull one."
};

const char* bot_death_insult[] = {
	"Mmmmmmm. Was it good for you too %s?",
	"Well I guess %s won the lottery.",	
	"My mother fragged me once %s. Once.",
	"I'm gonna pull out your bowels %s",
	"Beginners luck %s... Again",
	"So %s... you're up to what ... 3 frags an hour?"
};

const char* bot_death_praise[] = {
	"%s not bad for an amateur.",
	"%s alright that was pretty good. Your still a dousche.",
	"That was definitely ... um ... pretty good %s",
	"I've seen better %s, but not many.",
	"Take a moment to reflect on your accomplishment %s",
	"Your pretty good for a dousche %s"
};

/*
====================
rvmBot::BotSendChatMessage
====================
*/
void rvmBot::BotSendChatMessage(botChat_t chat, const char* targetName) {
	switch (chat)
	{
		case KILL:
			gameLocal.mpGame.AddChatLine(bot_kill_insult[rvRandom::irand(0, 3)], targetName);
			break;
		case DEATH:
			if (rvRandom::irand(0, 10) < 5)
			{
				gameLocal.mpGame.AddChatLine(bot_death_insult[rvRandom::irand(0, 5)], targetName);
			}
			else
			{
				gameLocal.mpGame.AddChatLine(bot_death_praise[rvRandom::irand(0, 5)], targetName);
			}
			break;
	}
}