/* Copyright (c) 2006-2015 Jonas Fonseca <jonas.fonseca@gmail.com>
	_(DIFF_DEL_FILE,  	"--- "), \
	_(DIFF_ADD_FILE,  	"+++ "), \
typedef bool (*line_rule_visitor_fn)(void *data, const struct line_rule *rule);
bool foreach_line_rule(line_rule_visitor_fn fn, void *data);
