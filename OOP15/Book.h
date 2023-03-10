#pragma once
#include <string>
class Book
{

public:
	Book(int yearIssure,
		const std::string& author,
		const std::string& title,
		const std::string& content);

	const std::string& getAuthor() const;
	const std::string& getTitle() const;
	const std::string& getContent() const;
	int getYearIssue() const;

	void setAuthor(const std::string& author);
	void setTitle(const std::string& title);
	void setContent(const std::string& content);
	void setYearIssue(int yearIssrue);


private:
	int _yearIssrue;
	std::string _author;
	std::string _title;
	std::string _content;
};

