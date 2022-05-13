// Movie.hh
#ifndef MOVIE_H
#define MOVIE_H
#include <string>


enum class GENRE {
	REGULAR,
	NEW_RELEASE,
	CHILDREN
};

class Movie {
public:
	static const int REGULAR = 0;
	static const int NEW_RELEASE = 1;
	static const int CHILDRENS = 2;


	Movie(const std::string& title, GENRE input_genre);

	GENRE get_genre() const;
	void set_genre(GENRE input_gengre);
	std::string getTitle() const;

private:
	GENRE genre;
	std::string movieTitle;
};
#endif // MOVIE_H
