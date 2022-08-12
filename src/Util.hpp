#if !defined(Util_HPP)
#define Util_HPP
#include "inc.hpp"
#define CATE_VERSION "v1.2.4"

#ifdef __WIN32
#define ARGC_START 0
#define OBJ_EXTENSION ".obj"
#else
#define ARGC_START 1
#define OBJ_EXTENSION ".o"
#endif // OS check

extern int lexer_line;

#define BOLD "\x1B[1m" 
#define RESET "\x1B[0m"

namespace Util
{
	void error(string problem);
	//void warning(string problem);
	void command_error(string problem);
	void lexer_error(std::string problem);
	void error(int line, string problem);
	void fatal_error(int line, string problem);
	void build_error(string &name, string problem);

	inline string remove_extension(string& s) {return s = s.substr(0, s.find_last_of("."));}
	string remove_quotes(string &s);

	void replace_all(string& s, string const& toReplace, string const& replaceWith);
	string replace_all_safe(string &s, string const& toReplace, string const& replaceWith);

	long get_modified_time(const char *path);
	void system(string &command);
} // namespace Util

#endif
