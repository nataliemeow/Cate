/* A lexical scanner generated by flex */

#ifndef yyHEADER_H
#define yyHEADER_H
#define yyIN_HEADER 1

#define FLEX_SCANNER
#define YY_FLEX_MAJOR_VERSION 2
#define YY_FLEX_MINOR_VERSION 6
#define YY_FLEX_SUBMINOR_VERSION 4
#if YY_FLEX_SUBMINOR_VERSION > 0
#define FLEX_BETA
#endif

    /* The c++ scanner is a mess. The FlexLexer.h header file relies on the
     * following macro. This is required in order to pass the c++-multiple-scanners
     * test in the regression suite. We get reports that it breaks inheritance.
     * We will address this in a future release of flex, or omit the C++ scanner
     * altogether.
     */
    #define yyFlexLexer yyFlexLexer

/* First, we deal with  platform-specific or compiler-specific issues. */

/* begin standard C headers. */

/* end standard C headers. */

/* begin standard C++ headers. */

#include <iostream>
#include <errno.h>
#include <cstdlib>
#include <cstdio>
#include <cstring>
/* end standard C++ headers. */

/* flex integer type definitions */

#ifndef YYFLEX_INTTYPES_DEFINED
#define YYFLEX_INTTYPES_DEFINED

/* Prefer C99 integer types if available. */

# if defined(__cplusplus) && __cplusplus >= 201103L
#include <cstdint>
#  define YYFLEX_USE_STDINT
# endif
# if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
/* Include <inttypes.h> and not <stdint.h> because Solaris 2.6 has the former
 * and not the latter.
 */
#include <inttypes.h>
#  define YYFLEX_USE_STDINT
# else
#  if defined(_MSC_VER) && _MSC_VER >= 1600
/* Visual C++ 2010 does not define __STDC_VERSION__ and has <stdint.h> but not
 * <inttypes.h>.
 */
#include <stdint.h>
#   define YYFLEX_USE_STDINT
#  endif
# endif
# ifdef YYFLEX_USE_STDINT
typedef int8_t flex_int8_t;
typedef uint8_t flex_uint8_t;
typedef int16_t flex_int16_t;
typedef uint16_t flex_uint16_t;
typedef int32_t flex_int32_t;
typedef uint32_t flex_uint32_t;
# else
typedef unsigned char flex_uint8_t;
typedef short int flex_int16_t;
typedef unsigned short int flex_uint16_t;
#  ifdef __STDC__
typedef signed char flex_int8_t;
/* ISO C only requires at least 16 bits for int. */
#   ifdef __cplusplus
#include <climits>
#   else
#include <limits.h>
#   endif
#   if UINT_MAX >= 4294967295
#    define YYFLEX_INT32_DEFINED
typedef int flex_int32_t;
typedef unsigned int flex_uint32_t;
#   endif
#  else
typedef char flex_int8_t;
#  endif
#  ifndef YYFLEX_INT32_DEFINED
typedef long int flex_int32_t;
typedef unsigned long int flex_uint32_t;
#  endif
# endif
#endif /* YYFLEX_INTTYPES_DEFINED */

/* TODO: this is always defined, so inline it */
#define yyconst const

#if defined(__GNUC__) && __GNUC__ >= 3
#define yynoreturn __attribute__((__noreturn__))
#else
#define yynoreturn
#endif

#ifndef YY_TYPEDEF_YY_BUFFER_STATE
#define YY_TYPEDEF_YY_BUFFER_STATE
typedef struct yy_buffer_state *yybuffer;
/* Legacy interface */
typedef struct yy_buffer_state *YY_BUFFER_STATE;
#endif

#ifndef YY_TYPEDEF_YY_SIZE_T
#define YY_TYPEDEF_YY_SIZE_T
typedef size_t yy_size_t;
#endif

extern int yyleng;

#ifndef YY_STRUCT_YY_BUFFER_STATE
#define YY_STRUCT_YY_BUFFER_STATE
struct yy_buffer_state
	{

	std::streambuf* yy_input_file;

	char *yy_ch_buf;		/* input buffer */
	char *yy_buf_pos;		/* current position in input buffer */

	/* Size of input buffer in bytes, not including room for EOB
	 * characters.
	 */
	int yy_buf_size;

	/* Number of characters read into yy_ch_buf, not including EOB
	 * characters.
	 */
	int yy_n_chars;

	/* Whether we "own" the buffer - i.e., we know we created it,
	 * and can realloc() it to grow it, and should free() it to
	 * delete it.
	 */
	int yy_is_our_buffer;

	/* Whether this is an "interactive" input source; if so, and
	 * if we're using stdio for input, then we want to use getc()
	 * instead of fread(), to make sure we stop fetching input after
	 * each newline.
	 */
	int yy_is_interactive;

	/* Whether we're considered to be at the beginning of a line.
	 * If so, '^' rules will be active on the next match, otherwise
	 * not.
	 */
	int yyatbol;

	int yy_bs_lineno; /**< The line count. */
	int yy_bs_column; /**< The column count. */

	/* Whether to try to fill the input buffer when we reach the
	 * end of it.
	 */
	int yy_fill_buffer;

	int yy_buffer_status;

	};
#endif /* !YY_STRUCT_YY_BUFFER_STATE */

void *yyalloc ( yy_size_t  );
void *yyrealloc ( void *, yy_size_t  );
void yyfree ( void *  );

/* Begin user sect3 */

#define YY_SKIP_YYWRAP

#define yytext_ptr yytext

#include "nonstd/FlexLexer.h"

#ifdef YY_HEADER_EXPORT_START_CONDITIONS
#define INITIAL 0

#endif

#ifndef YY_NO_UNISTD_H
/* Special case for "unistd.h", since it is non-ANSI. We include it way
 * down here because we want the user's section 1 to have been scanned first.
 * The user has a chance to override it with an option.
 */

#include <unistd.h>

#endif

#ifndef YY_EXTRA_TYPE
#define YY_EXTRA_TYPE void *
#endif

#ifndef yytext_ptr
static void yy_flex_strncpy ( char *, const char *, int );
#endif

#ifdef YY_NEED_STRLEN
static int yy_flex_strlen ( const char * );
#endif

#define YY_NO_YYINPUT 1

#ifndef YY_NO_YYINPUT

#endif

/*
 * Amount of stuff to slurp up with each read.
 * We assume the stdio library has already
 * chosen a fit size foe whatever platform
 * we're running on.
 */
#define YY_READ_BUF_SIZE BUFSIZ

/* Size of default input buffer. We want to be able to fit two
 * OS-level reads, but efficiency gains as the buffer size
 * increases fall off after that
 */
#ifndef YY_BUF_SIZE
#define YY_BUF_SIZE	(2 * YY_READ_BUF_SIZE)
#endif

/* Number of entries by which start-condition stack grows. */
#ifndef YY_START_STACK_INCR
#define YY_START_STACK_INCR 25
#endif

/* Default declaration of generated scanner - a define so the user can
 * easily add parameters.
 */
#ifndef YY_DECL
#define YY_DECL_IS_OURS 1

#define YY_DECL int yyFlexLexer::yylex()

#endif /* !YY_DECL */

/* yy_get_previous_state - get the state just before the EOB char was reached */

#undef YY_NEW_FILE
#undef YY_FLUSH_BUFFER
#undef yysetbol
#undef yy_new_buffer
#undef yy_set_interactive
#undef YY_DO_BEFORE_ACTION

#ifdef YY_DECL_IS_OURS
#undef YY_DECL_IS_OURS
#undef YY_DECL
#endif

#ifndef yy_create_buffer_ALREADY_DEFINED
#undef yy_create_buffer
#endif
#ifndef yy_delete_buffer_ALREADY_DEFINED
#undef yy_delete_buffer
#endif
#ifndef yy_scan_buffer_ALREADY_DEFINED
#undef yy_scan_buffer
#endif
#ifndef yy_scan_string_ALREADY_DEFINED
#undef yy_scan_string
#endif
#ifndef yy_scan_bytes_ALREADY_DEFINED
#undef yy_scan_bytes
#endif
#ifndef yy_init_buffer_ALREADY_DEFINED
#undef yy_init_buffer
#endif
#ifndef yy_flush_buffer_ALREADY_DEFINED
#undef yy_flush_buffer
#endif
#ifndef yy_load_buffer_state_ALREADY_DEFINED
#undef yy_load_buffer_state
#endif
#ifndef yy_switch_to_buffer_ALREADY_DEFINED
#undef yy_switch_to_buffer
#endif
#ifndef yypush_buffer_state_ALREADY_DEFINED
#undef yypush_buffer_state
#endif
#ifndef yypop_buffer_state_ALREADY_DEFINED
#undef yypop_buffer_state
#endif
#ifndef yyensure_buffer_stack_ALREADY_DEFINED
#undef yyensure_buffer_stack
#endif
#ifndef yylex_ALREADY_DEFINED
#undef yylex
#endif
#ifndef yyrestart_ALREADY_DEFINED
#undef yyrestart
#endif
#ifndef yylex_init_ALREADY_DEFINED
#undef yylex_init
#endif
#ifndef yylex_init_extra_ALREADY_DEFINED
#undef yylex_init_extra
#endif
#ifndef yylex_destroy_ALREADY_DEFINED
#undef yylex_destroy
#endif
#ifndef yyget_debug_ALREADY_DEFINED
#undef yyget_debug
#endif
#ifndef yyset_debug_ALREADY_DEFINED
#undef yyset_debug
#endif
#ifndef yyget_extra_ALREADY_DEFINED
#undef yyget_extra
#endif
#ifndef yyset_extra_ALREADY_DEFINED
#undef yyset_extra
#endif
#ifndef yyget_in_ALREADY_DEFINED
#undef yyget_in
#endif
#ifndef yyset_in_ALREADY_DEFINED
#undef yyset_in
#endif
#ifndef yyget_out_ALREADY_DEFINED
#undef yyget_out
#endif
#ifndef yyset_out_ALREADY_DEFINED
#undef yyset_out
#endif
#ifndef yyget_leng_ALREADY_DEFINED
#undef yyget_leng
#endif
#ifndef yyget_text_ALREADY_DEFINED
#undef yyget_text
#endif
#ifndef yyget_lineno_ALREADY_DEFINED
#undef yyget_lineno
#endif
#ifndef yyset_lineno_ALREADY_DEFINED
#undef yyset_lineno
#endif
#ifndef yyget_column_ALREADY_DEFINED
#undef yyget_column
#endif
#ifndef yyset_column_ALREADY_DEFINED
#undef yyset_column
#endif
#ifndef yywrap_ALREADY_DEFINED
#undef yywrap
#endif
#ifndef yyget_lval_ALREADY_DEFINED
#undef yyget_lval
#endif
#ifndef yyset_lval_ALREADY_DEFINED
#undef yyset_lval
#endif
#ifndef yyget_lloc_ALREADY_DEFINED
#undef yyget_lloc
#endif
#ifndef yyset_lloc_ALREADY_DEFINED
#undef yyset_lloc
#endif
#ifndef yyalloc_ALREADY_DEFINED
#undef yyalloc
#endif
#ifndef yyrealloc_ALREADY_DEFINED
#undef yyrealloc
#endif
#ifndef yyfree_ALREADY_DEFINED
#undef yyfree
#endif
#ifndef yytext_ALREADY_DEFINED
#undef yytext
#endif
#ifndef yyleng_ALREADY_DEFINED
#undef yyleng
#endif
#ifndef yyin_ALREADY_DEFINED
#undef yyin
#endif
#ifndef yyout_ALREADY_DEFINED
#undef yyout
#endif
#ifndef yyflexdebug_ALREADY_DEFINED
#undef yyflexdebug
#endif
#ifndef yylineno_ALREADY_DEFINED
#undef yylineno
#endif
#ifndef yytables_fload_ALREADY_DEFINED
#undef yytables_fload
#endif
#ifndef yytables_destroy_ALREADY_DEFINED
#undef yytables_destroy
#endif
#ifndef yyTABLES_NAME_ALREADY_DEFINED
#undef yyTABLES_NAME
#endif
#undef yyIN_HEADER
#endif /* yyHEADER_H */

#line 67 "src/lexer.l"