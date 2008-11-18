//
// Action symbols
//

BEGIN_TESTCASE
    TESTCASE_ID ("0256")
    REASONING ("Range check for symbols lastraisedx (x=1-4)")
    PRECONDITION (true)
    POSTCONDITION ((gws("lastraised1") >= 0) && (gws("lastraised1") <= 9) && (gws("lastraised2") >= 0) && (gws("lastraised2") <= 9) && (gws("lastraised3") >= 0) && (gws("lastraised3") <= 9) && (gws("lastraised4") >= 0) && (gws("lastraised4") <= 9))
    SYMBOLS_POSSIBLY_AFFECTED ("lastraised1, lastraised2, lastraised3, lastraised4")
END_TESTCASE

BEGIN_TESTCASE
    TESTCASE_ID ("0257")
    REASONING ("Range check for symbols raisbitsx (x=1-4) ")
    PRECONDITION (true)
    POSTCONDITION ((gws("raisbits1") >= 0) && (gws("raisbits1") <= 512) && (gws("raisbits2") >= 0) && (gws("raisbits2") <= 512) && (gws("raisbits3") >= 0) && (gws("raisbits3") <= 512) && (gws("raisbits4") >= 0) && (gws("raisbits4") <= 512) )
    SYMBOLS_POSSIBLY_AFFECTED ("raisbits1, raisbits2, raisbits3, raisbits4")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0258")
    REASONING ("Range check for symbols callbitsx (x=1-4) ")
    PRECONDITION (true)
    POSTCONDITION ((gws("callbits1") >= 0) && (gws("callbits1") <= 512) && (gws("callbits2") >= 0) && (gws("callbits2") <= 512) && (gws("callbits3") >= 0) && (gws("callbits3") <= 512) && (gws("callbits4") >= 0) && (gws("callbits4") <= 512) )
    SYMBOLS_POSSIBLY_AFFECTED ("callbits1, callbits2, callbits3, callbits4")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0259")
    REASONING ("Range check for symbols foldbitsx (x=1-4) ")
    PRECONDITION (true)
    POSTCONDITION ((gws("foldbits1") >= 0) && (gws("foldbits1") <= 512) && (gws("foldbits2") >= 0) && (gws("foldbits2") <= 512) && (gws("foldbits3") >= 0) && (gws("foldbits3") <= 512) && (gws("foldbits4") >= 0) && (gws("foldbits4") <= 512) )
    SYMBOLS_POSSIBLY_AFFECTED ("foldbits1, foldbits2, foldbits3, foldbits4")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0260")
    REASONING ("Range check for symbol oppdealt")
    PRECONDITION (true)
    POSTCONDITION ((gws("oppdealt") >= 0) && (gws("oppdealt") <= 10))
    SYMBOLS_POSSIBLY_AFFECTED ("oppdealt")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0261")
    REASONING ("Range check for symbol ac_aggressor")
    PRECONDITION (true)
    POSTCONDITION ((gws("ac_aggressor") >= 0) && (gws("ac_aggressor") <= 9))
    SYMBOLS_POSSIBLY_AFFECTED ("ac_aggressor")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0262")
    REASONING ("Range check for symbol ac_agchair_after")
    PRECONDITION (true)
    POSTCONDITION ((gws("ac_agchair_after") == true ) || (gws("ac_agchair_after") == false))
    SYMBOLS_POSSIBLY_AFFECTED ("ac_agchair_after")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0263")
    REASONING ("Range check for symbol ac_preflop_pos")
    PRECONDITION (true)
    POSTCONDITION ((gws("ac_preflop_pos") >= 1) && (gws("ac_preflop_pos") <= 6))
    SYMBOLS_POSSIBLY_AFFECTED ("ac_preflop_pos")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0264")
    REASONING ("Range check for symbol ac_prefloprais_pos")
    PRECONDITION (true)
    POSTCONDITION ((gws("ac_prefloprais_pos") >= 1) && (gws("ac_prefloprais_pos") <= 6))
    SYMBOLS_POSSIBLY_AFFECTED ("ac_prefloprais_pos")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0265")
    REASONING ("Range check for symbol ac_postflop_pos")
    PRECONDITION (true)
    POSTCONDITION ((gws("ac_postflop_pos") >= 1) && (gws("ac_postflop_pos") <= 5))
    SYMBOLS_POSSIBLY_AFFECTED ("ac_postflop_pos")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0266")
    REASONING ("Range check for symbol ac_pf_bets")
    PRECONDITION (gws("betround") == 1)
    POSTCONDITION ((gws("ac_pf_bets") >= 1) && (gws("ac_pf_bets") <= 5))
    SYMBOLS_POSSIBLY_AFFECTED ("ac_pf_bets, betround")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0267")
    REASONING ("Range check for symbol ac_first_into_pot")
    PRECONDITION (true)
    POSTCONDITION ((gws("ac_first_into_pot") == true) || (gws("ac_first_into_pot") == false))
    SYMBOLS_POSSIBLY_AFFECTED ("ac_first_into_pot")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0268")
    REASONING ("Range check for symbols ac_betposx (x=0-9)")
    PRECONDITION (true)
    POSTCONDITION ((gws("ac_betpos0") >= 1) && (gws("ac_betpos0") <= gws("nplayersdealt")) && (gws("ac_betpos1") >= 1) && (gws("ac_betpos1") <= gws("nplayersdealt")) && (gws("ac_betpos2") >= 1) && (gws("ac_betpos2") <= gws("nplayersdealt")) && (gws("ac_betpos3") >= 1) && (gws("ac_betpos3") <= gws("nplayersdealt")) && (gws("ac_betpos4") >= 1) && (gws("ac_betpos4") <= gws("nplayersdealt")) && (gws("ac_betpos5") >= 1) && (gws("ac_betpos5") <= gws("nplayersdealt")) && (gws("ac_betpos6") >= 1) && (gws("ac_betpos6") <= gws("nplayersdealt")) && (gws("ac_betpos7") >= 1) && (gws("ac_betpos7") <= gws("nplayersdealt")) && (gws("ac_betpos8") >= 1) && (gws("ac_betpos8") <= gws("nplayersdealt")) && (gws("ac_betpos9") >= 1) && (gws("ac_betpos9") <= gws("nplayersdealt")))
    SYMBOLS_POSSIBLY_AFFECTED ("ac_betpos0, ac_betpos1, ac_betpos2, ac_betpos3, ac_betpos4, ac_betpos5, ac_betpos6, ac_betpos7, ac_betpos8, ac_betpos9, nplayersdealt")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0269")
    REASONING ("Range check for symbols ac_dealposx (x=0-9)")
    PRECONDITION (true)
    POSTCONDITION ((gws("ac_dealpos0") >= 1) && (gws("ac_dealpos0") <= gws("nplayersdealt")) && (gws("ac_dealpos1") >= 1) && (gws("ac_dealpos1") <= gws("nplayersdealt")) && (gws("ac_dealpos2") >= 1) && (gws("ac_dealpos2") <= gws("nplayersdealt")) && (gws("ac_dealpos3") >= 1) && (gws("ac_dealpos3") <= gws("nplayersdealt")) && (gws("ac_dealpos4") >= 1) && (gws("ac_dealpos4") <= gws("nplayersdealt")) && (gws("ac_dealpos5") >= 1) && (gws("ac_dealpos5") <= gws("nplayersdealt")) && (gws("ac_dealpos6") >= 1) && (gws("ac_dealpos6") <= gws("nplayersdealt")) && (gws("ac_dealpos7") >= 1) && (gws("ac_dealpos7") <= gws("nplayersdealt")) && (gws("ac_dealpos8") >= 1) && (gws("ac_dealpos8") <= gws("nplayersdealt")) && (gws("ac_dealpos9") >= 1) && (gws("ac_dealpos9") <= gws("nplayersdealt")))
    SYMBOLS_POSSIBLY_AFFECTED ("ac_dealpos0, ac_dealpos1, ac_dealpos2, ac_dealpos3, ac_dealpos4, ac_dealpos5, ac_dealpos6, ac_dealpos7, ac_dealpos8, ac_dealpos9, nplayersdealt")
END_TESTCASE