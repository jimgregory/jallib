/** \file
 *  This C header file was generated by $ANTLR version 3.2 Sep 23, 2009 12:02:23
 *
 *     -  From the grammar source file : tmp_g\\jal.g
 *     -                            On : 2010-04-16 17:10:54
 *     -                 for the lexer : jalLexerLexer *
 * Editing it, at least manually, is not wise. 
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The lexer jalLexer has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 * 
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 * The parser entry points are called indirectly (by function pointer to function) via
 * a parser context typedef pjalLexer, which is returned from a call to jalLexerNew().
 *
 * As this is a generated lexer, it is unlikely you will call it 'manually'. However
 * the methods are provided anyway.
 * * The methods in pjalLexer are  as follows:
 *
 *  -  void      pjalLexer->T__66(pjalLexer)
 *  -  void      pjalLexer->T__67(pjalLexer)
 *  -  void      pjalLexer->T__68(pjalLexer)
 *  -  void      pjalLexer->T__69(pjalLexer)
 *  -  void      pjalLexer->T__70(pjalLexer)
 *  -  void      pjalLexer->T__71(pjalLexer)
 *  -  void      pjalLexer->T__72(pjalLexer)
 *  -  void      pjalLexer->T__73(pjalLexer)
 *  -  void      pjalLexer->T__74(pjalLexer)
 *  -  void      pjalLexer->T__75(pjalLexer)
 *  -  void      pjalLexer->T__76(pjalLexer)
 *  -  void      pjalLexer->T__77(pjalLexer)
 *  -  void      pjalLexer->T__78(pjalLexer)
 *  -  void      pjalLexer->T__79(pjalLexer)
 *  -  void      pjalLexer->T__80(pjalLexer)
 *  -  void      pjalLexer->T__81(pjalLexer)
 *  -  void      pjalLexer->T__82(pjalLexer)
 *  -  void      pjalLexer->T__83(pjalLexer)
 *  -  void      pjalLexer->T__84(pjalLexer)
 *  -  void      pjalLexer->T__85(pjalLexer)
 *  -  void      pjalLexer->T__86(pjalLexer)
 *  -  void      pjalLexer->T__87(pjalLexer)
 *  -  void      pjalLexer->T__88(pjalLexer)
 *  -  void      pjalLexer->T__89(pjalLexer)
 *  -  void      pjalLexer->T__90(pjalLexer)
 *  -  void      pjalLexer->T__91(pjalLexer)
 *  -  void      pjalLexer->T__92(pjalLexer)
 *  -  void      pjalLexer->T__93(pjalLexer)
 *  -  void      pjalLexer->T__94(pjalLexer)
 *  -  void      pjalLexer->T__95(pjalLexer)
 *  -  void      pjalLexer->T__96(pjalLexer)
 *  -  void      pjalLexer->T__97(pjalLexer)
 *  -  void      pjalLexer->T__98(pjalLexer)
 *  -  void      pjalLexer->T__99(pjalLexer)
 *  -  void      pjalLexer->T__100(pjalLexer)
 *  -  void      pjalLexer->BIN_LITERAL(pjalLexer)
 *  -  void      pjalLexer->DECIMAL_LITERAL(pjalLexer)
 *  -  void      pjalLexer->HEX_LITERAL(pjalLexer)
 *  -  void      pjalLexer->OCTAL_LITERAL(pjalLexer)
 *  -  void      pjalLexer->CHARACTER_LITERAL(pjalLexer)
 *  -  void      pjalLexer->STRING_LITERAL(pjalLexer)
 *  -  void      pjalLexer->HEX_DIGIT(pjalLexer)
 *  -  void      pjalLexer->ESCAPE_SEQUENCE(pjalLexer)
 *  -  void      pjalLexer->OCTAL_ESCAPE(pjalLexer)
 *  -  void      pjalLexer->WS(pjalLexer)
 *  -  void      pjalLexer->LINE_COMMENT(pjalLexer)
 *  -  void      pjalLexer->L_RETURN(pjalLexer)
 *  -  void      pjalLexer->L_ASSERT(pjalLexer)
 *  -  void      pjalLexer->L_INCLUDE(pjalLexer)
 *  -  void      pjalLexer->L__DEBUG(pjalLexer)
 *  -  void      pjalLexer->L__ERROR(pjalLexer)
 *  -  void      pjalLexer->L__WARN(pjalLexer)
 *  -  void      pjalLexer->L_ASM(pjalLexer)
 *  -  void      pjalLexer->L_FOR(pjalLexer)
 *  -  void      pjalLexer->L_USING(pjalLexer)
 *  -  void      pjalLexer->L_LOOP(pjalLexer)
 *  -  void      pjalLexer->L_EXIT(pjalLexer)
 *  -  void      pjalLexer->L_END(pjalLexer)
 *  -  void      pjalLexer->L_ASSEMBLER(pjalLexer)
 *  -  void      pjalLexer->L_FOREVER(pjalLexer)
 *  -  void      pjalLexer->L_WHILE(pjalLexer)
 *  -  void      pjalLexer->L_REPEAT(pjalLexer)
 *  -  void      pjalLexer->L_UNTIL(pjalLexer)
 *  -  void      pjalLexer->L_IF(pjalLexer)
 *  -  void      pjalLexer->L_THEN(pjalLexer)
 *  -  void      pjalLexer->L_ELSEIF(pjalLexer)
 *  -  void      pjalLexer->L_ELSE(pjalLexer)
 *  -  void      pjalLexer->L_CASE(pjalLexer)
 *  -  void      pjalLexer->L_OTHERWISE(pjalLexer)
 *  -  void      pjalLexer->L_BLOCK(pjalLexer)
 *  -  void      pjalLexer->L_VOLATILE(pjalLexer)
 *  -  void      pjalLexer->L_IN(pjalLexer)
 *  -  void      pjalLexer->L_OUT(pjalLexer)
 *  -  void      pjalLexer->L_SHARED(pjalLexer)
 *  -  void      pjalLexer->L_AT(pjalLexer)
 *  -  void      pjalLexer->L_IS(pjalLexer)
 *  -  void      pjalLexer->L_BIT(pjalLexer)
 *  -  void      pjalLexer->L_BYTE(pjalLexer)
 *  -  void      pjalLexer->L_WORD(pjalLexer)
 *  -  void      pjalLexer->L_DWORD(pjalLexer)
 *  -  void      pjalLexer->L_SBYTE(pjalLexer)
 *  -  void      pjalLexer->L_SWORD(pjalLexer)
 *  -  void      pjalLexer->L_SDWORD(pjalLexer)
 *  -  void      pjalLexer->L_PRAGMA(pjalLexer)
 *  -  void      pjalLexer->L_TARGET(pjalLexer)
 *  -  void      pjalLexer->L_INLINE(pjalLexer)
 *  -  void      pjalLexer->L_STACK(pjalLexer)
 *  -  void      pjalLexer->L_CODE(pjalLexer)
 *  -  void      pjalLexer->L_EEPROM(pjalLexer)
 *  -  void      pjalLexer->L_ID(pjalLexer)
 *  -  void      pjalLexer->L_DATA(pjalLexer)
 *  -  void      pjalLexer->L_FUSEDEF(pjalLexer)
 *  -  void      pjalLexer->L_CHIP(pjalLexer)
 *  -  void      pjalLexer->L_INTERRUPT(pjalLexer)
 *  -  void      pjalLexer->L_NOP(pjalLexer)
 *  -  void      pjalLexer->IDENTIFIER(pjalLexer)
 *  -  void      pjalLexer->LETTER(pjalLexer)
 *  -  void      pjalLexer->Tokens(pjalLexer)
 *
 * The return type for any particular rule is of course determined by the source
 * grammar file.
 */
// [The "BSD licence"]
// Copyright (c) 2005-2009 Jim Idle, Temporal Wave LLC
// http://www.temporal-wave.com
// http://www.linkedin.com/in/jimidle
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef	_jalLexer_H
#define _jalLexer_H
/* =============================================================================
 * Standard antlr3 C runtime definitions
 */
#include    <antlr3.h>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */
 
#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct jalLexer_Ctx_struct jalLexer, * pjalLexer;



#ifdef	ANTLR3_WINDOWS
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule 
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4701 )
#endif

/** Context tracking structure for jalLexer
 */
struct jalLexer_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_LEXER    pLexer;


     void (*mT__66)	(struct jalLexer_Ctx_struct * ctx);
     void (*mT__67)	(struct jalLexer_Ctx_struct * ctx);
     void (*mT__68)	(struct jalLexer_Ctx_struct * ctx);
     void (*mT__69)	(struct jalLexer_Ctx_struct * ctx);
     void (*mT__70)	(struct jalLexer_Ctx_struct * ctx);
     void (*mT__71)	(struct jalLexer_Ctx_struct * ctx);
     void (*mT__72)	(struct jalLexer_Ctx_struct * ctx);
     void (*mT__73)	(struct jalLexer_Ctx_struct * ctx);
     void (*mT__74)	(struct jalLexer_Ctx_struct * ctx);
     void (*mT__75)	(struct jalLexer_Ctx_struct * ctx);
     void (*mT__76)	(struct jalLexer_Ctx_struct * ctx);
     void (*mT__77)	(struct jalLexer_Ctx_struct * ctx);
     void (*mT__78)	(struct jalLexer_Ctx_struct * ctx);
     void (*mT__79)	(struct jalLexer_Ctx_struct * ctx);
     void (*mT__80)	(struct jalLexer_Ctx_struct * ctx);
     void (*mT__81)	(struct jalLexer_Ctx_struct * ctx);
     void (*mT__82)	(struct jalLexer_Ctx_struct * ctx);
     void (*mT__83)	(struct jalLexer_Ctx_struct * ctx);
     void (*mT__84)	(struct jalLexer_Ctx_struct * ctx);
     void (*mT__85)	(struct jalLexer_Ctx_struct * ctx);
     void (*mT__86)	(struct jalLexer_Ctx_struct * ctx);
     void (*mT__87)	(struct jalLexer_Ctx_struct * ctx);
     void (*mT__88)	(struct jalLexer_Ctx_struct * ctx);
     void (*mT__89)	(struct jalLexer_Ctx_struct * ctx);
     void (*mT__90)	(struct jalLexer_Ctx_struct * ctx);
     void (*mT__91)	(struct jalLexer_Ctx_struct * ctx);
     void (*mT__92)	(struct jalLexer_Ctx_struct * ctx);
     void (*mT__93)	(struct jalLexer_Ctx_struct * ctx);
     void (*mT__94)	(struct jalLexer_Ctx_struct * ctx);
     void (*mT__95)	(struct jalLexer_Ctx_struct * ctx);
     void (*mT__96)	(struct jalLexer_Ctx_struct * ctx);
     void (*mT__97)	(struct jalLexer_Ctx_struct * ctx);
     void (*mT__98)	(struct jalLexer_Ctx_struct * ctx);
     void (*mT__99)	(struct jalLexer_Ctx_struct * ctx);
     void (*mT__100)	(struct jalLexer_Ctx_struct * ctx);
     void (*mBIN_LITERAL)	(struct jalLexer_Ctx_struct * ctx);
     void (*mDECIMAL_LITERAL)	(struct jalLexer_Ctx_struct * ctx);
     void (*mHEX_LITERAL)	(struct jalLexer_Ctx_struct * ctx);
     void (*mOCTAL_LITERAL)	(struct jalLexer_Ctx_struct * ctx);
     void (*mCHARACTER_LITERAL)	(struct jalLexer_Ctx_struct * ctx);
     void (*mSTRING_LITERAL)	(struct jalLexer_Ctx_struct * ctx);
     void (*mHEX_DIGIT)	(struct jalLexer_Ctx_struct * ctx);
     void (*mESCAPE_SEQUENCE)	(struct jalLexer_Ctx_struct * ctx);
     void (*mOCTAL_ESCAPE)	(struct jalLexer_Ctx_struct * ctx);
     void (*mWS)	(struct jalLexer_Ctx_struct * ctx);
     void (*mLINE_COMMENT)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_RETURN)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_ASSERT)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_INCLUDE)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL__DEBUG)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL__ERROR)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL__WARN)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_ASM)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_FOR)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_USING)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_LOOP)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_EXIT)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_END)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_ASSEMBLER)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_FOREVER)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_WHILE)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_REPEAT)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_UNTIL)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_IF)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_THEN)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_ELSEIF)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_ELSE)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_CASE)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_OTHERWISE)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_BLOCK)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_VOLATILE)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_IN)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_OUT)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_SHARED)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_AT)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_IS)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_BIT)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_BYTE)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_WORD)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_DWORD)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_SBYTE)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_SWORD)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_SDWORD)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_PRAGMA)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_TARGET)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_INLINE)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_STACK)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_CODE)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_EEPROM)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_ID)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_DATA)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_FUSEDEF)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_CHIP)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_INTERRUPT)	(struct jalLexer_Ctx_struct * ctx);
     void (*mL_NOP)	(struct jalLexer_Ctx_struct * ctx);
     void (*mIDENTIFIER)	(struct jalLexer_Ctx_struct * ctx);
     void (*mLETTER)	(struct jalLexer_Ctx_struct * ctx);
     void (*mTokens)	(struct jalLexer_Ctx_struct * ctx);    const char * (*getGrammarFileName)();
    void	    (*free)   (struct jalLexer_Ctx_struct * ctx);
        
};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pjalLexer jalLexerNew         (pANTLR3_INPUT_STREAM instream);
ANTLR3_API pjalLexer jalLexerNewSSD      (pANTLR3_INPUT_STREAM instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the lexer will work with.
 * \{
 *
 * Antlr will define EOF, but we can't use that as it it is too common in
 * in C header files and that would be confusing. There is no way to filter this out at the moment
 * so we just undef it here for now. That isn't the value we get back from C recognizers
 * anyway. We are looking for ANTLR3_TOKEN_EOF.
 */
#ifdef	EOF
#undef	EOF
#endif
#ifdef	Tokens
#undef	Tokens
#endif 
#define L__ERROR      11
#define L_USING      18
#define LETTER      65
#define L_INTERRUPT      47
#define EOF      -1
#define L_CODE      49
#define L__DEBUG      9
#define T__93      93
#define L_REPEAT      21
#define T__94      94
#define L_DWORD      40
#define L_SBYTE      41
#define T__91      91
#define T__92      92
#define STRING_LITERAL      10
#define T__90      90
#define L_NOP      14
#define L_FUSEDEF      53
#define BIN_LITERAL      56
#define L_STACK      48
#define L_PRAGMA      44
#define L_ELSE      26
#define L_DATA      52
#define T__99      99
#define T__98      98
#define T__97      97
#define T__96      96
#define T__95      95
#define T__80      80
#define T__81      81
#define T__82      82
#define T__83      83
#define LINE_COMMENT      64
#define L_VOLATILE      30
#define CHARACTER_LITERAL      36
#define OCTAL_ESCAPE      62
#define T__85      85
#define T__84      84
#define T__87      87
#define T__86      86
#define T__89      89
#define T__88      88
#define L_END      16
#define L_BYTE      38
#define WS      63
#define T__71      71
#define T__72      72
#define L_EXIT      4
#define T__70      70
#define L_BLOCK      29
#define T__76      76
#define T__75      75
#define L_SHARED      34
#define T__74      74
#define DECIMAL_LITERAL      59
#define T__73      73
#define T__79      79
#define L_THEN      24
#define T__78      78
#define L_AT      35
#define T__77      77
#define T__68      68
#define T__69      69
#define T__66      66
#define T__67      67
#define L_RETURN      6
#define L_FOREVER      19
#define L_IF      23
#define L_IS      33
#define L_EEPROM      50
#define L_IN      31
#define L_ASSERT      7
#define L_CHIP      54
#define L_ID      51
#define ESCAPE_SEQUENCE      61
#define L_SWORD      42
#define L_CASE      27
#define L_BIT      37
#define IDENTIFIER      55
#define L_ELSEIF      25
#define HEX_LITERAL      57
#define L_LOOP      5
#define L_ASSEMBLER      15
#define L_FOR      17
#define L_WORD      39
#define L_INCLUDE      8
#define L__WARN      12
#define OCTAL_LITERAL      58
#define HEX_DIGIT      60
#define L_OTHERWISE      28
#define T__100      100
#define L_UNTIL      22
#define L_TARGET      45
#define L_WHILE      20
#define L_SDWORD      43
#define L_OUT      32
#define L_INLINE      46
#define L_ASM      13
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for jalLexer
 * =============================================================================
 */
/** \} */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */