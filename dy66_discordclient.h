#pragma once
#include <string>
#include <malloc.h>
#include <stdlib.h>
#include <stdio.h>
namespace dy66dc
{
	class discordclient
	{
	};
	/// <summary>
	/// Represents Discord Configuration
	/// </summary>
	struct dcconfiguration
	{
		std::string Token;
		enum TokenType TokenType;
	};
	/// <summary>
	/// Represents the token type.
	/// </summary>
	enum TokenType
	{
		TTYPE_USER,
		TTYPE_BOT,

	};
}