//Before 

};

ESex GET_SEX(LPCHARACTER ch);

//Add


#ifdef ENABLE_UNIQUE_IMMORTALITY
	public:
		bool		IsImmortal() {return bImmortality;}
		void		SetImmortality(bool bInfo) { bInfo = bImmortality;}
	private:
		bool		bImmortality;
#endif

//output 

#ifdef ENABLE_UNIQUE_IMMORTALITY
	public:
		bool		IsImmortal() {return bImmortality;}
		void		SetImmortality(bool bInfo) { bImmortality = bInfo;}
	private:
		bool		bImmortality;
#endif
};

ESex GET_SEX(LPCHARACTER ch);