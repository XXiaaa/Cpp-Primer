#pragma once

#include <memory>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>
#include "QueryResult.h"
#include "StrBlob.h"

using namespace std;

class QueryResult;

class TextQuery
{
public:
	using line_no = vector<string>::size_type;
	TextQuery(ifstream&);
	QueryResult query(const string&) const;

private:
	StrBlob file;
	map<string, shared_ptr<set<line_no>>> wm;
};

