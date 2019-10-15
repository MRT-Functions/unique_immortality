//Marty SRC

//Search 

ALUA(dungeon_unique_set_maxhp)

//Add Before

#ifdef ENABLE_UNIQUE_IMMORTALITY	
	ALUA(dungeon_unique_set_immortality)
	{
		if (!lua_isstring(L,1) || !lua_isnumber(L,2))
			return 0;

		CQuestManager& q = CQuestManager::instance();
		LPDUNGEON pDungeon = q.GetCurrentDungeon();

		if (pDungeon)
			pDungeon->UniqueSetImmortality(lua_tostring(L,1), (int)lua_tonumber(L,2));

		return 0;
	}	
#endif

//Search
{ "setqf2",			dungeon_set_quest_flag2	},

//Add

#ifdef ENABLE_UNIQUE_IMMORTALITY
			{ "SetImmortality",				dungeon_unique_set_immortality},
#endif
