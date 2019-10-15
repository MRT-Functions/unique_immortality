//Search

bool CHARACTER::Damage(LPCHARACTER pAttacker, int dam, EDamageType type) // returns true if dead
{

//Add After 


#ifdef ENABLE_UNIQUE_IMMORTALITY
	if (IsImmortal())
		return false;
#endif
