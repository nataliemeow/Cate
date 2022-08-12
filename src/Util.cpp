#include "Util.hpp"

extern bool parser_exit;

namespace Util
{
	void error(string problem)
	{
		std::cout << "\u001b[31m\033[1mError\u001b[0m\033[0m: " << problem << "\n";
		parser_exit = true;
	}

	/*void warning(string problem)
	{
		std::cout << "\u001b[31m\033[1mWarning\u001b[0m\033[0m: " << problem << "\n";
	}*/

	void lexer_error(string problem)
	{
		std::cout << "\u001b[31m\033[1mError\u001b[0m\033[0m in line " << lexer_line << ": " << problem << "\n";
		parser_exit = true;
	}

	void error(int line, string problem)
	{
		std::cout << "\u001b[31m\033[1mError\u001b[0m\033[0m in line " << line << ": " << problem << "\n";
		parser_exit = true;
	}

	void fatal_error(int line, string problem)
	{
		std::cout << "\u001b[31m\033[1mError\u001b[0m\033[0m in line " << line << ": " << problem << "\n";
		exit(1);
	}

	void command_error(string problem)
	{
		std::cout << "\u001b[31m\033[1mError\u001b[0m\033[0m in command: " << problem << "\n";
		exit(1);
	}

	void build_error(string &name, string problem)
	{
		std::cout << "\u001b[31m\033[1mError\u001b[0m\033[0m: Cannot build \""
						  << name << "\" because " << problem << "\nTerminating.\n";
		exit(1);
	}

	string remove_quotes(string &s) 
	{
		s.erase(0, 1);
		s.pop_back();
		return s;
	}

	void replace_all( //thank you for the code @Mateen Ulhaq from stackoverflow! i was too lazy to write it myself
		string& s,
		string const& toReplace,
		string const& replaceWith
	) {
		std::ostringstream oss;
		oss.str().reserve(s.length());
		std::size_t pos = 0;
		std::size_t prevPos = pos;

		while (true) {
			prevPos = pos;
			pos = s.find(toReplace, pos);
			if (pos == string::npos)
				break;
			oss << s.substr(prevPos, pos - prevPos);
			oss << replaceWith;
			pos += toReplace.size();
		}

		oss << s.substr(prevPos);
		s = oss.str();
	}

	string replace_all_safe( //thank you for the code @Mateen Ulhaq from stackoverflow! i was too lazy to write it myself
		string &s,
		string const& toReplace,
		string const& replaceWith
	) {
		std::ostringstream oss;
		oss.str().reserve(s.length());
		std::size_t pos = 0;
		std::size_t prevPos = pos;

		while (true) {
			prevPos = pos;
			pos = s.find(toReplace, pos);
			if (pos == string::npos)
				break;
			oss << s.substr(prevPos, pos - prevPos);
			oss << replaceWith;
			pos += toReplace.size();
		}

		oss << s.substr(prevPos);
		return oss.str();
	}

	long long get_modified_time(const char *path)
	{
		struct stat attr;
		if (stat(path, &attr) != 0) //check if file exists
			return 0; //will always recompile since file doesn't exist

		#ifdef __WIN32
		return attr.st_mtime;
		#else
		return attr.st_mtim.tv_sec;
		#endif // __WIN32

	}

	void system(string &command)
	{
		int ret = std::system(command.c_str());

		//if (WEXITSTATUS(ret) != 0) //if there was an error
		if ((((ret) & 0xff00) >> 8) != 0) //save a bit of time in the preprocessing phase
		{
			std::cout << "\u001b[31m\033[1mError\u001b[0m\033[0m: Not all files have been built.\n";
			exit(1);
		}
	}
} // namespace Util
