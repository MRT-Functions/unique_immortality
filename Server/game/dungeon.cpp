//Search 

void CDungeon::UniqueSetHP(const std::string& key, int iHP)

//Add Before

#ifdef ENABLE_UNIQUE_IMMORTALITY
void CDungeon::UniqueSetImmortality(const std::string& key, bool bImmortality)
{
	TUniqueMobMap::iterator it = m_map_UniqueMob.find(key);
	if (it == m_map_UniqueMob.end())
	{
		sys_err("Unknown Key : %s", key.c_str());
		return;
	}
	it->second->SetImmortality(bImmortality);
}
#endif