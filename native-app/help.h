#ifndef DR_SOCKET_HELP_H
#define DR_SOCKET_HELP_H

#include <dragonruby.h>

mrb_int cext_to_int(mrb_state *mrb, mrb_value value);
mrb_float cext_to_float(mrb_state *mrb, mrb_value value);
const char* cext_to_string(mrb_state *mrb, mrb_value value);
mrb_sym cext_sym(mrb_state *mrb, const char* str);
mrb_value cext_key(mrb_state *mrb, const char* str);
mrb_value cext_hash_get(mrb_state *mrb, mrb_value hash, const char* key);
void cext_hash_set(mrb_state *mrb, mrb_value hash, const char* key, mrb_value val);
bool cext_is_string(mrb_state *mrb, mrb_value value);
bool cext_is_symbol(mrb_state *mrb, mrb_value value);
bool cext_is_int(mrb_state *mrb, mrb_value value);
bool cext_is_hash(mrb_state *mrb, mrb_value value);
bool cext_is_array(mrb_state *mrb, mrb_value value);
bool cext_is_undef(mrb_state *mrb, mrb_value value);
bool cext_is_valid_type(mrb_state *mrb, mrb_value value);

#endif