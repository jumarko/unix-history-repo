C
C VILLAINS AND DEMONS
C
	LOGICAL THFFLG,SWDACT,THFACT
	COMMON /HACK/ THFPOS,THFFLG,THFACT,SWDACT,SWDSTA
C
	COMMON /VILL/ VLNT,VILLNS(4),VPROB(4),VOPPS(4),VBEST(4),VMELEE(4)
C
	INTEGER EQV(4,5)
	EQUIVALENCE (VILLNS, EQV)
