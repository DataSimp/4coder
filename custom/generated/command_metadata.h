#if !defined(META_PASS)
#define command_id(c) (fcoder_metacmd_ID_##c)
#define command_metadata(c) (&fcoder_metacmd_table[command_id(c)])
#define command_metadata_by_id(id) (&fcoder_metacmd_table[id])
#define command_one_past_last_id 248
#if defined(CUSTOM_COMMAND_SIG)
#define PROC_LINKS(x,y) x
#else
#define PROC_LINKS(x,y) y
#endif
#if defined(CUSTOM_COMMAND_SIG)
CUSTOM_COMMAND_SIG(allow_mouse);
CUSTOM_COMMAND_SIG(auto_indent_line_at_cursor);
CUSTOM_COMMAND_SIG(auto_indent_range);
CUSTOM_COMMAND_SIG(auto_indent_whole_file);
CUSTOM_COMMAND_SIG(backspace_alpha_numeric_boundary);
CUSTOM_COMMAND_SIG(backspace_char);
CUSTOM_COMMAND_SIG(basic_change_active_panel);
CUSTOM_COMMAND_SIG(begin_clipboard_collection_mode);
CUSTOM_COMMAND_SIG(build_in_build_panel);
CUSTOM_COMMAND_SIG(build_search);
CUSTOM_COMMAND_SIG(center_view);
CUSTOM_COMMAND_SIG(change_active_panel);
CUSTOM_COMMAND_SIG(change_active_panel_backwards);
CUSTOM_COMMAND_SIG(change_to_build_panel);
CUSTOM_COMMAND_SIG(clean_all_lines);
CUSTOM_COMMAND_SIG(clean_trailing_whitespace);
CUSTOM_COMMAND_SIG(clear_all_themes);
CUSTOM_COMMAND_SIG(clear_clipboard);
CUSTOM_COMMAND_SIG(click_set_cursor);
CUSTOM_COMMAND_SIG(click_set_cursor_and_mark);
CUSTOM_COMMAND_SIG(click_set_cursor_if_lbutton);
CUSTOM_COMMAND_SIG(click_set_mark);
CUSTOM_COMMAND_SIG(clipboard_record_clip);
CUSTOM_COMMAND_SIG(close_all_code);
CUSTOM_COMMAND_SIG(close_build_panel);
CUSTOM_COMMAND_SIG(close_panel);
CUSTOM_COMMAND_SIG(command_documentation);
CUSTOM_COMMAND_SIG(command_lister);
CUSTOM_COMMAND_SIG(comment_line);
CUSTOM_COMMAND_SIG(comment_line_toggle);
CUSTOM_COMMAND_SIG(copy);
CUSTOM_COMMAND_SIG(cursor_mark_swap);
CUSTOM_COMMAND_SIG(custom_api_documentation);
CUSTOM_COMMAND_SIG(cut);
CUSTOM_COMMAND_SIG(decrease_face_size);
CUSTOM_COMMAND_SIG(default_file_externally_modified);
CUSTOM_COMMAND_SIG(default_startup);
CUSTOM_COMMAND_SIG(default_try_exit);
CUSTOM_COMMAND_SIG(default_view_input_handler);
CUSTOM_COMMAND_SIG(delete_alpha_numeric_boundary);
CUSTOM_COMMAND_SIG(delete_char);
CUSTOM_COMMAND_SIG(delete_current_scope);
CUSTOM_COMMAND_SIG(delete_file_query);
CUSTOM_COMMAND_SIG(delete_line);
CUSTOM_COMMAND_SIG(delete_range);
CUSTOM_COMMAND_SIG(display_key_codes);
CUSTOM_COMMAND_SIG(display_text_input);
CUSTOM_COMMAND_SIG(double_backspace);
CUSTOM_COMMAND_SIG(duplicate_line);
CUSTOM_COMMAND_SIG(execute_any_cli);
CUSTOM_COMMAND_SIG(execute_previous_cli);
CUSTOM_COMMAND_SIG(exit_4coder);
CUSTOM_COMMAND_SIG(goto_beginning_of_file);
CUSTOM_COMMAND_SIG(goto_end_of_file);
CUSTOM_COMMAND_SIG(goto_first_jump);
CUSTOM_COMMAND_SIG(goto_first_jump_same_panel_sticky);
CUSTOM_COMMAND_SIG(goto_jump_at_cursor);
CUSTOM_COMMAND_SIG(goto_jump_at_cursor_same_panel);
CUSTOM_COMMAND_SIG(goto_line);
CUSTOM_COMMAND_SIG(goto_next_jump);
CUSTOM_COMMAND_SIG(goto_next_jump_no_skips);
CUSTOM_COMMAND_SIG(goto_prev_jump);
CUSTOM_COMMAND_SIG(goto_prev_jump_no_skips);
CUSTOM_COMMAND_SIG(hide_filebar);
CUSTOM_COMMAND_SIG(hide_scrollbar);
CUSTOM_COMMAND_SIG(hms_demo_tutorial);
CUSTOM_COMMAND_SIG(if0_off);
CUSTOM_COMMAND_SIG(if_read_only_goto_position);
CUSTOM_COMMAND_SIG(if_read_only_goto_position_same_panel);
CUSTOM_COMMAND_SIG(increase_face_size);
CUSTOM_COMMAND_SIG(interactive_kill_buffer);
CUSTOM_COMMAND_SIG(interactive_new);
CUSTOM_COMMAND_SIG(interactive_open);
CUSTOM_COMMAND_SIG(interactive_open_or_new);
CUSTOM_COMMAND_SIG(interactive_switch_buffer);
CUSTOM_COMMAND_SIG(jump_to_definition);
CUSTOM_COMMAND_SIG(jump_to_definition_at_cursor);
CUSTOM_COMMAND_SIG(jump_to_last_point);
CUSTOM_COMMAND_SIG(keyboard_macro_finish_recording);
CUSTOM_COMMAND_SIG(keyboard_macro_replay);
CUSTOM_COMMAND_SIG(keyboard_macro_start_recording);
CUSTOM_COMMAND_SIG(kill_buffer);
CUSTOM_COMMAND_SIG(kill_tutorial);
CUSTOM_COMMAND_SIG(left_adjust_view);
CUSTOM_COMMAND_SIG(list_all_functions_all_buffers);
CUSTOM_COMMAND_SIG(list_all_functions_all_buffers_lister);
CUSTOM_COMMAND_SIG(list_all_functions_current_buffer);
CUSTOM_COMMAND_SIG(list_all_functions_current_buffer_lister);
CUSTOM_COMMAND_SIG(list_all_locations);
CUSTOM_COMMAND_SIG(list_all_locations_case_insensitive);
CUSTOM_COMMAND_SIG(list_all_locations_of_identifier);
CUSTOM_COMMAND_SIG(list_all_locations_of_identifier_case_insensitive);
CUSTOM_COMMAND_SIG(list_all_locations_of_selection);
CUSTOM_COMMAND_SIG(list_all_locations_of_selection_case_insensitive);
CUSTOM_COMMAND_SIG(list_all_locations_of_type_definition);
CUSTOM_COMMAND_SIG(list_all_locations_of_type_definition_of_identifier);
CUSTOM_COMMAND_SIG(list_all_substring_locations);
CUSTOM_COMMAND_SIG(list_all_substring_locations_case_insensitive);
CUSTOM_COMMAND_SIG(load_project);
CUSTOM_COMMAND_SIG(load_theme_current_buffer);
CUSTOM_COMMAND_SIG(load_themes_default_folder);
CUSTOM_COMMAND_SIG(load_themes_hot_directory);
CUSTOM_COMMAND_SIG(make_directory_query);
CUSTOM_COMMAND_SIG(miblo_decrement_basic);
CUSTOM_COMMAND_SIG(miblo_decrement_time_stamp);
CUSTOM_COMMAND_SIG(miblo_decrement_time_stamp_minute);
CUSTOM_COMMAND_SIG(miblo_increment_basic);
CUSTOM_COMMAND_SIG(miblo_increment_time_stamp);
CUSTOM_COMMAND_SIG(miblo_increment_time_stamp_minute);
CUSTOM_COMMAND_SIG(mouse_wheel_change_face_size);
CUSTOM_COMMAND_SIG(mouse_wheel_scroll);
CUSTOM_COMMAND_SIG(move_down);
CUSTOM_COMMAND_SIG(move_down_10);
CUSTOM_COMMAND_SIG(move_down_textual);
CUSTOM_COMMAND_SIG(move_down_to_blank_line);
CUSTOM_COMMAND_SIG(move_down_to_blank_line_end);
CUSTOM_COMMAND_SIG(move_down_to_blank_line_skip_whitespace);
CUSTOM_COMMAND_SIG(move_left);
CUSTOM_COMMAND_SIG(move_left_alpha_numeric_boundary);
CUSTOM_COMMAND_SIG(move_left_alpha_numeric_or_camel_boundary);
CUSTOM_COMMAND_SIG(move_left_token_boundary);
CUSTOM_COMMAND_SIG(move_left_whitespace_boundary);
CUSTOM_COMMAND_SIG(move_left_whitespace_or_token_boundary);
CUSTOM_COMMAND_SIG(move_line_down);
CUSTOM_COMMAND_SIG(move_line_up);
CUSTOM_COMMAND_SIG(move_right);
CUSTOM_COMMAND_SIG(move_right_alpha_numeric_boundary);
CUSTOM_COMMAND_SIG(move_right_alpha_numeric_or_camel_boundary);
CUSTOM_COMMAND_SIG(move_right_token_boundary);
CUSTOM_COMMAND_SIG(move_right_whitespace_boundary);
CUSTOM_COMMAND_SIG(move_right_whitespace_or_token_boundary);
CUSTOM_COMMAND_SIG(move_up);
CUSTOM_COMMAND_SIG(move_up_10);
CUSTOM_COMMAND_SIG(move_up_to_blank_line);
CUSTOM_COMMAND_SIG(move_up_to_blank_line_end);
CUSTOM_COMMAND_SIG(move_up_to_blank_line_skip_whitespace);
CUSTOM_COMMAND_SIG(multi_paste);
CUSTOM_COMMAND_SIG(multi_paste_interactive);
CUSTOM_COMMAND_SIG(multi_paste_interactive_quick);
CUSTOM_COMMAND_SIG(open_all_code);
CUSTOM_COMMAND_SIG(open_all_code_recursive);
CUSTOM_COMMAND_SIG(open_file_in_quotes);
CUSTOM_COMMAND_SIG(open_in_other);
CUSTOM_COMMAND_SIG(open_long_braces);
CUSTOM_COMMAND_SIG(open_long_braces_break);
CUSTOM_COMMAND_SIG(open_long_braces_semicolon);
CUSTOM_COMMAND_SIG(open_matching_file_cpp);
CUSTOM_COMMAND_SIG(open_panel_hsplit);
CUSTOM_COMMAND_SIG(open_panel_vsplit);
CUSTOM_COMMAND_SIG(page_down);
CUSTOM_COMMAND_SIG(page_up);
CUSTOM_COMMAND_SIG(paste);
CUSTOM_COMMAND_SIG(paste_and_indent);
CUSTOM_COMMAND_SIG(paste_next);
CUSTOM_COMMAND_SIG(paste_next_and_indent);
CUSTOM_COMMAND_SIG(place_in_scope);
CUSTOM_COMMAND_SIG(play_with_a_counter);
CUSTOM_COMMAND_SIG(profile_clear);
CUSTOM_COMMAND_SIG(profile_disable);
CUSTOM_COMMAND_SIG(profile_enable);
CUSTOM_COMMAND_SIG(profile_inspect);
CUSTOM_COMMAND_SIG(project_command_lister);
CUSTOM_COMMAND_SIG(project_fkey_command);
CUSTOM_COMMAND_SIG(project_go_to_root_directory);
CUSTOM_COMMAND_SIG(query_replace);
CUSTOM_COMMAND_SIG(query_replace_identifier);
CUSTOM_COMMAND_SIG(query_replace_selection);
CUSTOM_COMMAND_SIG(quick_swap_buffer);
CUSTOM_COMMAND_SIG(redo);
CUSTOM_COMMAND_SIG(redo_all_buffers);
CUSTOM_COMMAND_SIG(rename_file_query);
CUSTOM_COMMAND_SIG(reopen);
CUSTOM_COMMAND_SIG(replace_in_all_buffers);
CUSTOM_COMMAND_SIG(replace_in_buffer);
CUSTOM_COMMAND_SIG(replace_in_range);
CUSTOM_COMMAND_SIG(reverse_search);
CUSTOM_COMMAND_SIG(reverse_search_identifier);
CUSTOM_COMMAND_SIG(save);
CUSTOM_COMMAND_SIG(save_all_dirty_buffers);
CUSTOM_COMMAND_SIG(save_to_query);
CUSTOM_COMMAND_SIG(search);
CUSTOM_COMMAND_SIG(search_identifier);
CUSTOM_COMMAND_SIG(seek_beginning_of_line);
CUSTOM_COMMAND_SIG(seek_beginning_of_textual_line);
CUSTOM_COMMAND_SIG(seek_end_of_line);
CUSTOM_COMMAND_SIG(seek_end_of_textual_line);
CUSTOM_COMMAND_SIG(select_all);
CUSTOM_COMMAND_SIG(select_next_scope_absolute);
CUSTOM_COMMAND_SIG(select_next_scope_after_current);
CUSTOM_COMMAND_SIG(select_prev_scope_absolute);
CUSTOM_COMMAND_SIG(select_prev_top_most_scope);
CUSTOM_COMMAND_SIG(select_surrounding_scope);
CUSTOM_COMMAND_SIG(select_surrounding_scope_maximal);
CUSTOM_COMMAND_SIG(set_eol_mode_from_contents);
CUSTOM_COMMAND_SIG(set_eol_mode_to_binary);
CUSTOM_COMMAND_SIG(set_eol_mode_to_crlf);
CUSTOM_COMMAND_SIG(set_eol_mode_to_lf);
CUSTOM_COMMAND_SIG(set_face_size);
CUSTOM_COMMAND_SIG(set_face_size_this_buffer);
CUSTOM_COMMAND_SIG(set_mark);
CUSTOM_COMMAND_SIG(set_mode_to_notepad_like);
CUSTOM_COMMAND_SIG(set_mode_to_original);
CUSTOM_COMMAND_SIG(setup_build_bat);
CUSTOM_COMMAND_SIG(setup_build_bat_and_sh);
CUSTOM_COMMAND_SIG(setup_build_sh);
CUSTOM_COMMAND_SIG(setup_new_project);
CUSTOM_COMMAND_SIG(show_filebar);
CUSTOM_COMMAND_SIG(show_scrollbar);
CUSTOM_COMMAND_SIG(show_the_log_graph);
CUSTOM_COMMAND_SIG(snipe_backward_whitespace_or_token_boundary);
CUSTOM_COMMAND_SIG(snipe_forward_whitespace_or_token_boundary);
CUSTOM_COMMAND_SIG(snippet_lister);
CUSTOM_COMMAND_SIG(string_repeat);
CUSTOM_COMMAND_SIG(suppress_mouse);
CUSTOM_COMMAND_SIG(swap_panels);
CUSTOM_COMMAND_SIG(test_the_new_api);
CUSTOM_COMMAND_SIG(theme_lister);
CUSTOM_COMMAND_SIG(to_lowercase);
CUSTOM_COMMAND_SIG(to_uppercase);
CUSTOM_COMMAND_SIG(toggle_filebar);
CUSTOM_COMMAND_SIG(toggle_fps_meter);
CUSTOM_COMMAND_SIG(toggle_fullscreen);
CUSTOM_COMMAND_SIG(toggle_highlight_enclosing_scopes);
CUSTOM_COMMAND_SIG(toggle_highlight_line_at_cursor);
CUSTOM_COMMAND_SIG(toggle_line_numbers);
CUSTOM_COMMAND_SIG(toggle_line_wrap);
CUSTOM_COMMAND_SIG(toggle_mouse);
CUSTOM_COMMAND_SIG(toggle_paren_matching_helper);
CUSTOM_COMMAND_SIG(toggle_show_whitespace);
CUSTOM_COMMAND_SIG(toggle_virtual_whitespace);
CUSTOM_COMMAND_SIG(tutorial_maximize);
CUSTOM_COMMAND_SIG(tutorial_minimize);
CUSTOM_COMMAND_SIG(uncomment_line);
CUSTOM_COMMAND_SIG(undo);
CUSTOM_COMMAND_SIG(undo_all_buffers);
CUSTOM_COMMAND_SIG(view_buffer_other_panel);
CUSTOM_COMMAND_SIG(view_jump_list_with_lister);
CUSTOM_COMMAND_SIG(word_complete);
CUSTOM_COMMAND_SIG(word_complete_drop_down);
CUSTOM_COMMAND_SIG(write_block);
CUSTOM_COMMAND_SIG(write_hack);
CUSTOM_COMMAND_SIG(write_note);
CUSTOM_COMMAND_SIG(write_space);
CUSTOM_COMMAND_SIG(write_text_and_auto_indent);
CUSTOM_COMMAND_SIG(write_text_input);
CUSTOM_COMMAND_SIG(write_todo);
CUSTOM_COMMAND_SIG(write_underscore);
CUSTOM_COMMAND_SIG(write_zero_struct);
#endif
struct Command_Metadata{
PROC_LINKS(Custom_Command_Function, void) *proc;
b32 is_ui;
char *name;
i32 name_len;
char *description;
i32 description_len;
char *source_name;
i32 source_name_len;
i32 line_number;
};
static Command_Metadata fcoder_metacmd_table[248] = {
{ PROC_LINKS(allow_mouse, 0), false, "allow_mouse", 11, "Shows the mouse and causes all mouse input to be processed normally.", 68, "../code/custom/4coder_default_framework.cpp", 43, 485 },
{ PROC_LINKS(auto_indent_line_at_cursor, 0), false, "auto_indent_line_at_cursor", 26, "Auto-indents the line on which the cursor sits.", 47, "../code/custom/4coder_auto_indent.cpp", 37, 417 },
{ PROC_LINKS(auto_indent_range, 0), false, "auto_indent_range", 17, "Auto-indents the range between the cursor and the mark.", 55, "../code/custom/4coder_auto_indent.cpp", 37, 427 },
{ PROC_LINKS(auto_indent_whole_file, 0), false, "auto_indent_whole_file", 22, "Audo-indents the entire current buffer.", 39, "../code/custom/4coder_auto_indent.cpp", 37, 408 },
{ PROC_LINKS(backspace_alpha_numeric_boundary, 0), false, "backspace_alpha_numeric_boundary", 32, "Delete characters between the cursor position and the first alphanumeric boundary to the left.", 94, "../code/custom/4coder_base_commands.cpp", 39, 154 },
{ PROC_LINKS(backspace_char, 0), false, "backspace_char", 14, "Deletes the character to the left of the cursor.", 48, "../code/custom/4coder_base_commands.cpp", 39, 96 },
{ PROC_LINKS(basic_change_active_panel, 0), false, "basic_change_active_panel", 25, "Change the currently active panel, moving to the panel with the next highest view_id.  Will not skipe the build panel if it is open.", 132, "../code/custom/4coder_base_commands.cpp", 39, 665 },
{ PROC_LINKS(begin_clipboard_collection_mode, 0), true, "begin_clipboard_collection_mode", 31, "Allows the user to copy multiple strings from other applications before switching to 4coder and pasting them all.", 113, "../code/custom/4coder_clipboard.cpp", 35, 68 },
{ PROC_LINKS(build_in_build_panel, 0), false, "build_in_build_panel", 20, "Looks for a build.bat, build.sh, or makefile in the current and parent directories.  Runs the first that it finds and prints the output to *compilation*.  Puts the *compilation* buffer in a panel at the footer of the current view.", 230, "../code/custom/4coder_build_commands.cpp", 40, 159 },
{ PROC_LINKS(build_search, 0), false, "build_search", 12, "Looks for a build.bat, build.sh, or makefile in the current and parent directories.  Runs the first that it finds and prints the output to *compilation*.", 153, "../code/custom/4coder_build_commands.cpp", 40, 122 },
{ PROC_LINKS(center_view, 0), false, "center_view", 11, "Centers the view vertically on the line on which the cursor sits.", 65, "../code/custom/4coder_base_commands.cpp", 39, 195 },
{ PROC_LINKS(change_active_panel, 0), false, "change_active_panel", 19, "Change the currently active panel, moving to the panel with the next highest view_id.", 85, "../code/custom/4coder_default_framework.cpp", 43, 360 },
{ PROC_LINKS(change_active_panel_backwards, 0), false, "change_active_panel_backwards", 29, "Change the currently active panel, moving to the panel with the next lowest view_id.", 84, "../code/custom/4coder_default_framework.cpp", 43, 366 },
{ PROC_LINKS(change_to_build_panel, 0), false, "change_to_build_panel", 21, "If the special build panel is open, makes the build panel the active panel.", 75, "../code/custom/4coder_build_commands.cpp", 40, 180 },
{ PROC_LINKS(clean_all_lines, 0), false, "clean_all_lines", 15, "Removes trailing whitespace from all lines and removes all blank lines in the current buffer.", 93, "../code/custom/4coder_base_commands.cpp", 39, 645 },
{ PROC_LINKS(clean_trailing_whitespace, 0), false, "clean_trailing_whitespace", 25, "Removes trailing whitespace from all lines in the current buffer.", 65, "../code/custom/4coder_base_commands.cpp", 39, 654 },
{ PROC_LINKS(clear_all_themes, 0), false, "clear_all_themes", 16, "Clear the theme list", 20, "../code/custom/4coder_default_framework.cpp", 43, 556 },
{ PROC_LINKS(clear_clipboard, 0), false, "clear_clipboard", 15, "Clears the history of the clipboard", 35, "../code/custom/4coder_clipboard.cpp", 35, 216 },
{ PROC_LINKS(click_set_cursor, 0), false, "click_set_cursor", 16, "Sets the cursor position to the mouse position.", 47, "../code/custom/4coder_base_commands.cpp", 39, 233 },
{ PROC_LINKS(click_set_cursor_and_mark, 0), false, "click_set_cursor_and_mark", 25, "Sets the cursor position and mark to the mouse position.", 56, "../code/custom/4coder_base_commands.cpp", 39, 223 },
{ PROC_LINKS(click_set_cursor_if_lbutton, 0), false, "click_set_cursor_if_lbutton", 27, "If the mouse left button is pressed, sets the cursor position to the mouse position.", 84, "../code/custom/4coder_base_commands.cpp", 39, 243 },
{ PROC_LINKS(click_set_mark, 0), false, "click_set_mark", 14, "Sets the mark position to the mouse position.", 45, "../code/custom/4coder_base_commands.cpp", 39, 255 },
{ PROC_LINKS(clipboard_record_clip, 0), false, "clipboard_record_clip", 21, "In response to a new clipboard contents events, saves the new clip onto the clipboard history", 93, "../code/custom/4coder_clipboard.cpp", 35, 7 },
{ PROC_LINKS(close_all_code, 0), false, "close_all_code", 14, "Closes any buffer with a filename ending with an extension configured to be recognized as a code file type.", 107, "../code/custom/4coder_project_commands.cpp", 42, 844 },
{ PROC_LINKS(close_build_panel, 0), false, "close_build_panel", 17, "If the special build panel is open, closes it.", 46, "../code/custom/4coder_build_commands.cpp", 40, 174 },
{ PROC_LINKS(close_panel, 0), false, "close_panel", 11, "Closes the currently active panel if it is not the only panel open.", 67, "../code/custom/4coder_base_commands.cpp", 39, 673 },
{ PROC_LINKS(command_documentation, 0), true, "command_documentation", 21, "Prompts the user to select a command then loads a doc buffer for that item", 74, "../code/custom/4coder_docs.cpp", 30, 190 },
{ PROC_LINKS(command_lister, 0), true, "command_lister", 14, "Opens an interactive list of all registered commands.", 53, "../code/custom/4coder_lists.cpp", 31, 760 },
{ PROC_LINKS(comment_line, 0), false, "comment_line", 12, "Insert '//' at the beginning of the line after leading whitespace.", 66, "../code/custom/4coder_combined_write_commands.cpp", 49, 125 },
{ PROC_LINKS(comment_line_toggle, 0), false, "comment_line_toggle", 19, "Turns uncommented lines into commented lines and vice versa for comments starting with '//'.", 92, "../code/custom/4coder_combined_write_commands.cpp", 49, 149 },
{ PROC_LINKS(copy, 0), false, "copy", 4, "Copy the text in the range from the cursor to the mark onto the clipboard.", 74, "../code/custom/4coder_clipboard.cpp", 35, 107 },
{ PROC_LINKS(cursor_mark_swap, 0), false, "cursor_mark_swap", 16, "Swaps the position of the cursor and the mark.", 46, "../code/custom/4coder_base_commands.cpp", 39, 124 },
{ PROC_LINKS(custom_api_documentation, 0), true, "custom_api_documentation", 24, "Prompts the user to select a Custom API item then loads a doc buffer for that item", 82, "../code/custom/4coder_docs.cpp", 30, 175 },
{ PROC_LINKS(cut, 0), false, "cut", 3, "Cut the text in the range from the cursor to the mark onto the clipboard.", 73, "../code/custom/4coder_clipboard.cpp", 35, 116 },
{ PROC_LINKS(decrease_face_size, 0), false, "decrease_face_size", 18, "Decrease the size of the face used by the current buffer.", 57, "../code/custom/4coder_base_commands.cpp", 39, 756 },
{ PROC_LINKS(default_file_externally_modified, 0), false, "default_file_externally_modified", 32, "Notes the external modification of attached files by printing a message.", 72, "../code/custom/4coder_base_commands.cpp", 39, 2054 },
{ PROC_LINKS(default_startup, 0), false, "default_startup", 15, "Default command for responding to a startup event", 49, "../code/custom/4coder_default_hooks.cpp", 39, 7 },
{ PROC_LINKS(default_try_exit, 0), false, "default_try_exit", 16, "Default command for responding to a try-exit event", 50, "../code/custom/4coder_default_hooks.cpp", 39, 23 },
{ PROC_LINKS(default_view_input_handler, 0), false, "default_view_input_handler", 26, "Input consumption loop for default view behavior", 48, "../code/custom/4coder_default_hooks.cpp", 39, 51 },
{ PROC_LINKS(delete_alpha_numeric_boundary, 0), false, "delete_alpha_numeric_boundary", 29, "Delete characters between the cursor position and the first alphanumeric boundary to the right.", 95, "../code/custom/4coder_base_commands.cpp", 39, 161 },
{ PROC_LINKS(delete_char, 0), false, "delete_char", 11, "Deletes the character to the right of the cursor.", 49, "../code/custom/4coder_base_commands.cpp", 39, 79 },
{ PROC_LINKS(delete_current_scope, 0), false, "delete_current_scope", 20, "Deletes the braces surrounding the currently selected scope.  Leaves the contents within the scope.", 99, "../code/custom/4coder_scope_commands.cpp", 40, 112 },
{ PROC_LINKS(delete_file_query, 0), false, "delete_file_query", 17, "Deletes the file of the current buffer if 4coder has the appropriate access rights. Will ask the user for confirmation first.", 125, "../code/custom/4coder_base_commands.cpp", 39, 1380 },
{ PROC_LINKS(delete_line, 0), false, "delete_line", 11, "Delete the line the on which the cursor sits.", 45, "../code/custom/4coder_base_commands.cpp", 39, 1552 },
{ PROC_LINKS(delete_range, 0), false, "delete_range", 12, "Deletes the text in the range between the cursor and the mark.", 62, "../code/custom/4coder_base_commands.cpp", 39, 134 },
{ PROC_LINKS(display_key_codes, 0), false, "display_key_codes", 17, "Example of input handling loop", 30, "../code/custom/4coder_examples.cpp", 34, 90 },
{ PROC_LINKS(display_text_input, 0), false, "display_text_input", 18, "Example of to_writable and leave_current_input_unhandled", 56, "../code/custom/4coder_examples.cpp", 34, 137 },
{ PROC_LINKS(double_backspace, 0), false, "double_backspace", 16, "Example of history group helpers", 32, "../code/custom/4coder_examples.cpp", 34, 10 },
{ PROC_LINKS(duplicate_line, 0), false, "duplicate_line", 14, "Create a copy of the line on which the cursor sits.", 51, "../code/custom/4coder_base_commands.cpp", 39, 1538 },
{ PROC_LINKS(execute_any_cli, 0), false, "execute_any_cli", 15, "Queries for an output buffer name and system command, runs the system command as a CLI and prints the output to the specified buffer.", 133, "../code/custom/4coder_cli_command.cpp", 37, 22 },
{ PROC_LINKS(execute_previous_cli, 0), false, "execute_previous_cli", 20, "If the command execute_any_cli has already been used, this will execute a CLI reusing the most recent buffer name and command.", 126, "../code/custom/4coder_cli_command.cpp", 37, 7 },
{ PROC_LINKS(exit_4coder, 0), false, "exit_4coder", 11, "Attempts to close 4coder.", 25, "../code/custom/4coder_base_commands.cpp", 39, 843 },
{ PROC_LINKS(goto_beginning_of_file, 0), false, "goto_beginning_of_file", 22, "Sets the cursor to the beginning of the file.", 45, "../code/custom/4coder_helper.cpp", 32, 2245 },
{ PROC_LINKS(goto_end_of_file, 0), false, "goto_end_of_file", 16, "Sets the cursor to the end of the file.", 39, "../code/custom/4coder_helper.cpp", 32, 2253 },
{ PROC_LINKS(goto_first_jump, 0), false, "goto_first_jump", 15, "If a buffer containing jump locations has been locked in, goes to the first jump in the buffer.", 95, "../code/custom/4coder_jump_sticky.cpp", 37, 525 },
{ PROC_LINKS(goto_first_jump_same_panel_sticky, 0), false, "goto_first_jump_same_panel_sticky", 33, "If a buffer containing jump locations has been locked in, goes to the first jump in the buffer and views the buffer in the panel where the jump list was.", 153, "../code/custom/4coder_jump_sticky.cpp", 37, 542 },
{ PROC_LINKS(goto_jump_at_cursor, 0), false, "goto_jump_at_cursor", 19, "If the cursor is found to be on a jump location, parses the jump location and brings up the file and position in another view and changes the active panel to the view containing the jump.", 187, "../code/custom/4coder_jump_sticky.cpp", 37, 348 },
{ PROC_LINKS(goto_jump_at_cursor_same_panel, 0), false, "goto_jump_at_cursor_same_panel", 30, "If the cursor is found to be on a jump location, parses the jump location and brings up the file and position in this view, losing the compilation output or jump list.", 167, "../code/custom/4coder_jump_sticky.cpp", 37, 375 },
{ PROC_LINKS(goto_line, 0), false, "goto_line", 9, "Queries the user for a number, and jumps the cursor to the corresponding line.", 78, "../code/custom/4coder_base_commands.cpp", 39, 851 },
{ PROC_LINKS(goto_next_jump, 0), false, "goto_next_jump", 14, "If a buffer containing jump locations has been locked in, goes to the next jump in the buffer, skipping sub jump locations.", 123, "../code/custom/4coder_jump_sticky.cpp", 37, 464 },
{ PROC_LINKS(goto_next_jump_no_skips, 0), false, "goto_next_jump_no_skips", 23, "If a buffer containing jump locations has been locked in, goes to the next jump in the buffer, and does not skip sub jump locations.", 132, "../code/custom/4coder_jump_sticky.cpp", 37, 494 },
{ PROC_LINKS(goto_prev_jump, 0), false, "goto_prev_jump", 14, "If a buffer containing jump locations has been locked in, goes to the previous jump in the buffer, skipping sub jump locations.", 127, "../code/custom/4coder_jump_sticky.cpp", 37, 481 },
{ PROC_LINKS(goto_prev_jump_no_skips, 0), false, "goto_prev_jump_no_skips", 23, "If a buffer containing jump locations has been locked in, goes to the previous jump in the buffer, and does not skip sub jump locations.", 136, "../code/custom/4coder_jump_sticky.cpp", 37, 511 },
{ PROC_LINKS(hide_filebar, 0), false, "hide_filebar", 12, "Sets the current view to hide it's filebar.", 43, "../code/custom/4coder_base_commands.cpp", 39, 703 },
{ PROC_LINKS(hide_scrollbar, 0), false, "hide_scrollbar", 14, "Sets the current view to hide it's scrollbar.", 45, "../code/custom/4coder_base_commands.cpp", 39, 689 },
{ PROC_LINKS(hms_demo_tutorial, 0), false, "hms_demo_tutorial", 17, "Tutorial for built in 4coder bindings and features.", 51, "../code/custom/4coder_tutorial.cpp", 34, 869 },
{ PROC_LINKS(if0_off, 0), false, "if0_off", 7, "Surround the range between the cursor and mark with an '#if 0' and an '#endif'", 78, "../code/custom/4coder_combined_write_commands.cpp", 49, 70 },
{ PROC_LINKS(if_read_only_goto_position, 0), false, "if_read_only_goto_position", 26, "If the buffer in the active view is writable, inserts a character, otherwise performs goto_jump_at_cursor.", 106, "../code/custom/4coder_jump_sticky.cpp", 37, 564 },
{ PROC_LINKS(if_read_only_goto_position_same_panel, 0), false, "if_read_only_goto_position_same_panel", 37, "If the buffer in the active view is writable, inserts a character, otherwise performs goto_jump_at_cursor_same_panel.", 117, "../code/custom/4coder_jump_sticky.cpp", 37, 581 },
{ PROC_LINKS(increase_face_size, 0), false, "increase_face_size", 18, "Increase the size of the face used by the current buffer.", 57, "../code/custom/4coder_base_commands.cpp", 39, 745 },
{ PROC_LINKS(interactive_kill_buffer, 0), true, "interactive_kill_buffer", 23, "Interactively kill an open buffer.", 34, "../code/custom/4coder_lists.cpp", 31, 520 },
{ PROC_LINKS(interactive_new, 0), true, "interactive_new", 15, "Interactively creates a new file.", 33, "../code/custom/4coder_lists.cpp", 31, 660 },
{ PROC_LINKS(interactive_open, 0), true, "interactive_open", 16, "Interactively opens a file.", 27, "../code/custom/4coder_lists.cpp", 31, 714 },
{ PROC_LINKS(interactive_open_or_new, 0), true, "interactive_open_or_new", 23, "Interactively open a file out of the file system.", 49, "../code/custom/4coder_lists.cpp", 31, 611 },
{ PROC_LINKS(interactive_switch_buffer, 0), true, "interactive_switch_buffer", 25, "Interactively switch to an open buffer.", 39, "../code/custom/4coder_lists.cpp", 31, 510 },
{ PROC_LINKS(jump_to_definition, 0), true, "jump_to_definition", 18, "List all definitions in the code index and jump to one chosen by the user.", 74, "../code/custom/4coder_code_index_listers.cpp", 44, 12 },
{ PROC_LINKS(jump_to_definition_at_cursor, 0), true, "jump_to_definition_at_cursor", 28, "Jump to the first definition in the code index matching an identifier at the cursor", 83, "../code/custom/4coder_code_index_listers.cpp", 44, 68 },
{ PROC_LINKS(jump_to_last_point, 0), false, "jump_to_last_point", 18, "Read from the top of the point stack and jump there; if already there pop the top and go to the next option", 107, "../code/custom/4coder_base_commands.cpp", 39, 1333 },
{ PROC_LINKS(keyboard_macro_finish_recording, 0), false, "keyboard_macro_finish_recording", 31, "Stop macro recording, do nothing if macro recording is not already started", 74, "../code/custom/4coder_keyboard_macro.cpp", 40, 54 },
{ PROC_LINKS(keyboard_macro_replay, 0), false, "keyboard_macro_replay", 21, "Replay the most recently recorded keyboard macro", 48, "../code/custom/4coder_keyboard_macro.cpp", 40, 77 },
{ PROC_LINKS(keyboard_macro_start_recording, 0), false, "keyboard_macro_start_recording", 30, "Start macro recording, do nothing if macro recording is already started", 71, "../code/custom/4coder_keyboard_macro.cpp", 40, 41 },
{ PROC_LINKS(kill_buffer, 0), false, "kill_buffer", 11, "Kills the current buffer.", 25, "../code/custom/4coder_base_commands.cpp", 39, 1716 },
{ PROC_LINKS(kill_tutorial, 0), false, "kill_tutorial", 13, "If there is an active tutorial, kill it.", 40, "../code/custom/4coder_tutorial.cpp", 34, 9 },
{ PROC_LINKS(left_adjust_view, 0), false, "left_adjust_view", 16, "Sets the left size of the view near the x position of the cursor.", 65, "../code/custom/4coder_base_commands.cpp", 39, 210 },
{ PROC_LINKS(list_all_functions_all_buffers, 0), false, "list_all_functions_all_buffers", 30, "Creates a jump list of lines from all buffers that appear to define or declare functions.", 89, "../code/custom/4coder_function_list.cpp", 39, 296 },
{ PROC_LINKS(list_all_functions_all_buffers_lister, 0), true, "list_all_functions_all_buffers_lister", 37, "Creates a lister of locations that look like function definitions and declarations all buffers.", 95, "../code/custom/4coder_function_list.cpp", 39, 302 },
{ PROC_LINKS(list_all_functions_current_buffer, 0), false, "list_all_functions_current_buffer", 33, "Creates a jump list of lines of the current buffer that appear to define or declare functions.", 94, "../code/custom/4coder_function_list.cpp", 39, 268 },
{ PROC_LINKS(list_all_functions_current_buffer_lister, 0), true, "list_all_functions_current_buffer_lister", 40, "Creates a lister of locations that look like function definitions and declarations in the buffer.", 97, "../code/custom/4coder_function_list.cpp", 39, 278 },
{ PROC_LINKS(list_all_locations, 0), false, "list_all_locations", 18, "Queries the user for a string and lists all exact case-sensitive matches found in all open buffers.", 99, "../code/custom/4coder_search.cpp", 32, 165 },
{ PROC_LINKS(list_all_locations_case_insensitive, 0), false, "list_all_locations_case_insensitive", 35, "Queries the user for a string and lists all exact case-insensitive matches found in all open buffers.", 101, "../code/custom/4coder_search.cpp", 32, 177 },
{ PROC_LINKS(list_all_locations_of_identifier, 0), false, "list_all_locations_of_identifier", 32, "Reads a token or word under the cursor and lists all exact case-sensitive mathces in all open buffers.", 102, "../code/custom/4coder_search.cpp", 32, 189 },
{ PROC_LINKS(list_all_locations_of_identifier_case_insensitive, 0), false, "list_all_locations_of_identifier_case_insensitive", 49, "Reads a token or word under the cursor and lists all exact case-insensitive mathces in all open buffers.", 104, "../code/custom/4coder_search.cpp", 32, 195 },
{ PROC_LINKS(list_all_locations_of_selection, 0), false, "list_all_locations_of_selection", 31, "Reads the string in the selected range and lists all exact case-sensitive mathces in all open buffers.", 102, "../code/custom/4coder_search.cpp", 32, 201 },
{ PROC_LINKS(list_all_locations_of_selection_case_insensitive, 0), false, "list_all_locations_of_selection_case_insensitive", 48, "Reads the string in the selected range and lists all exact case-insensitive mathces in all open buffers.", 104, "../code/custom/4coder_search.cpp", 32, 207 },
{ PROC_LINKS(list_all_locations_of_type_definition, 0), false, "list_all_locations_of_type_definition", 37, "Queries user for string, lists all locations of strings that appear to define a type whose name matches the input string.", 121, "../code/custom/4coder_search.cpp", 32, 213 },
{ PROC_LINKS(list_all_locations_of_type_definition_of_identifier, 0), false, "list_all_locations_of_type_definition_of_identifier", 51, "Reads a token or word under the cursor and lists all locations of strings that appear to define a type whose name matches it.", 125, "../code/custom/4coder_search.cpp", 32, 221 },
{ PROC_LINKS(list_all_substring_locations, 0), false, "list_all_substring_locations", 28, "Queries the user for a string and lists all case-sensitive substring matches found in all open buffers.", 103, "../code/custom/4coder_search.cpp", 32, 171 },
{ PROC_LINKS(list_all_substring_locations_case_insensitive, 0), false, "list_all_substring_locations_case_insensitive", 45, "Queries the user for a string and lists all case-insensitive substring matches found in all open buffers.", 105, "../code/custom/4coder_search.cpp", 32, 183 },
{ PROC_LINKS(load_project, 0), false, "load_project", 12, "Looks for a project.4coder file in the current directory and tries to load it.  Looks in parent directories until a project file is found or there are no more parents.", 167, "../code/custom/4coder_project_commands.cpp", 42, 864 },
{ PROC_LINKS(load_theme_current_buffer, 0), false, "load_theme_current_buffer", 25, "Parse the current buffer as a theme file and add the theme to the theme list. If the buffer has a .4coder postfix in it's name, it is removed when the name is saved.", 165, "../code/custom/4coder_config.cpp", 32, 1667 },
{ PROC_LINKS(load_themes_default_folder, 0), false, "load_themes_default_folder", 26, "Loads all the theme files in the default theme folder.", 54, "../code/custom/4coder_default_framework.cpp", 43, 533 },
{ PROC_LINKS(load_themes_hot_directory, 0), false, "load_themes_hot_directory", 25, "Loads all the theme files in the current hot directory.", 55, "../code/custom/4coder_default_framework.cpp", 43, 545 },
{ PROC_LINKS(make_directory_query, 0), false, "make_directory_query", 20, "Queries the user for a name and creates a new directory with the given name.", 76, "../code/custom/4coder_base_commands.cpp", 39, 1492 },
{ PROC_LINKS(miblo_decrement_basic, 0), false, "miblo_decrement_basic", 21, "Decrement an integer under the cursor by one.", 45, "../code/custom/4coder_miblo_numbers.cpp", 39, 44 },
{ PROC_LINKS(miblo_decrement_time_stamp, 0), false, "miblo_decrement_time_stamp", 26, "Decrement a time stamp under the cursor by one second. (format [m]m:ss or h:mm:ss", 81, "../code/custom/4coder_miblo_numbers.cpp", 39, 237 },
{ PROC_LINKS(miblo_decrement_time_stamp_minute, 0), false, "miblo_decrement_time_stamp_minute", 33, "Decrement a time stamp under the cursor by one minute. (format [m]m:ss or h:mm:ss", 81, "../code/custom/4coder_miblo_numbers.cpp", 39, 249 },
{ PROC_LINKS(miblo_increment_basic, 0), false, "miblo_increment_basic", 21, "Increment an integer under the cursor by one.", 45, "../code/custom/4coder_miblo_numbers.cpp", 39, 29 },
{ PROC_LINKS(miblo_increment_time_stamp, 0), false, "miblo_increment_time_stamp", 26, "Increment a time stamp under the cursor by one second. (format [m]m:ss or h:mm:ss", 81, "../code/custom/4coder_miblo_numbers.cpp", 39, 231 },
{ PROC_LINKS(miblo_increment_time_stamp_minute, 0), false, "miblo_increment_time_stamp_minute", 33, "Increment a time stamp under the cursor by one minute. (format [m]m:ss or h:mm:ss", 81, "../code/custom/4coder_miblo_numbers.cpp", 39, 243 },
{ PROC_LINKS(mouse_wheel_change_face_size, 0), false, "mouse_wheel_change_face_size", 28, "Reads the state of the mouse wheel and uses it to either increase or decrease the face size.", 92, "../code/custom/4coder_base_commands.cpp", 39, 798 },
{ PROC_LINKS(mouse_wheel_scroll, 0), false, "mouse_wheel_scroll", 18, "Reads the scroll wheel value from the mouse state and scrolls accordingly.", 74, "../code/custom/4coder_base_commands.cpp", 39, 265 },
{ PROC_LINKS(move_down, 0), false, "move_down", 9, "Moves the cursor down one line.", 31, "../code/custom/4coder_base_commands.cpp", 39, 339 },
{ PROC_LINKS(move_down_10, 0), false, "move_down_10", 12, "Moves the cursor down ten lines.", 32, "../code/custom/4coder_base_commands.cpp", 39, 351 },
{ PROC_LINKS(move_down_textual, 0), false, "move_down_textual", 17, "Moves down to the next line of actual text, regardless of line wrapping.", 72, "../code/custom/4coder_base_commands.cpp", 39, 357 },
{ PROC_LINKS(move_down_to_blank_line, 0), false, "move_down_to_blank_line", 23, "Seeks the cursor down to the next blank line.", 45, "../code/custom/4coder_base_commands.cpp", 39, 410 },
{ PROC_LINKS(move_down_to_blank_line_end, 0), false, "move_down_to_blank_line_end", 27, "Seeks the cursor down to the next blank line and places it at the end of the line.", 82, "../code/custom/4coder_base_commands.cpp", 39, 434 },
{ PROC_LINKS(move_down_to_blank_line_skip_whitespace, 0), false, "move_down_to_blank_line_skip_whitespace", 39, "Seeks the cursor down to the next blank line and places it at the end of the line.", 82, "../code/custom/4coder_base_commands.cpp", 39, 422 },
{ PROC_LINKS(move_left, 0), false, "move_left", 9, "Moves the cursor one character to the left.", 43, "../code/custom/4coder_base_commands.cpp", 39, 440 },
{ PROC_LINKS(move_left_alpha_numeric_boundary, 0), false, "move_left_alpha_numeric_boundary", 32, "Seek left for boundary between alphanumeric characters and non-alphanumeric characters.", 87, "../code/custom/4coder_base_commands.cpp", 39, 517 },
{ PROC_LINKS(move_left_alpha_numeric_or_camel_boundary, 0), false, "move_left_alpha_numeric_or_camel_boundary", 41, "Seek left for boundary between alphanumeric characters or camel case word and non-alphanumeric characters.", 106, "../code/custom/4coder_base_commands.cpp", 39, 531 },
{ PROC_LINKS(move_left_token_boundary, 0), false, "move_left_token_boundary", 24, "Seek left for the next beginning of a token.", 44, "../code/custom/4coder_base_commands.cpp", 39, 489 },
{ PROC_LINKS(move_left_whitespace_boundary, 0), false, "move_left_whitespace_boundary", 29, "Seek left for the next boundary between whitespace and non-whitespace.", 70, "../code/custom/4coder_base_commands.cpp", 39, 474 },
{ PROC_LINKS(move_left_whitespace_or_token_boundary, 0), false, "move_left_whitespace_or_token_boundary", 38, "Seek left for the next end of a token or boundary between whitespace and non-whitespace.", 88, "../code/custom/4coder_base_commands.cpp", 39, 503 },
{ PROC_LINKS(move_line_down, 0), false, "move_line_down", 14, "Swaps the line under the cursor with the line below it, and moves the cursor down with it.", 90, "../code/custom/4coder_base_commands.cpp", 39, 1532 },
{ PROC_LINKS(move_line_up, 0), false, "move_line_up", 12, "Swaps the line under the cursor with the line above it, and moves the cursor up with it.", 88, "../code/custom/4coder_base_commands.cpp", 39, 1526 },
{ PROC_LINKS(move_right, 0), false, "move_right", 10, "Moves the cursor one character to the right.", 44, "../code/custom/4coder_base_commands.cpp", 39, 448 },
{ PROC_LINKS(move_right_alpha_numeric_boundary, 0), false, "move_right_alpha_numeric_boundary", 33, "Seek right for boundary between alphanumeric characters and non-alphanumeric characters.", 88, "../code/custom/4coder_base_commands.cpp", 39, 510 },
{ PROC_LINKS(move_right_alpha_numeric_or_camel_boundary, 0), false, "move_right_alpha_numeric_or_camel_boundary", 42, "Seek right for boundary between alphanumeric characters or camel case word and non-alphanumeric characters.", 107, "../code/custom/4coder_base_commands.cpp", 39, 524 },
{ PROC_LINKS(move_right_token_boundary, 0), false, "move_right_token_boundary", 25, "Seek right for the next end of a token.", 39, "../code/custom/4coder_base_commands.cpp", 39, 482 },
{ PROC_LINKS(move_right_whitespace_boundary, 0), false, "move_right_whitespace_boundary", 30, "Seek right for the next boundary between whitespace and non-whitespace.", 71, "../code/custom/4coder_base_commands.cpp", 39, 466 },
{ PROC_LINKS(move_right_whitespace_or_token_boundary, 0), false, "move_right_whitespace_or_token_boundary", 39, "Seek right for the next end of a token or boundary between whitespace and non-whitespace.", 89, "../code/custom/4coder_base_commands.cpp", 39, 496 },
{ PROC_LINKS(move_up, 0), false, "move_up", 7, "Moves the cursor up one line.", 29, "../code/custom/4coder_base_commands.cpp", 39, 333 },
{ PROC_LINKS(move_up_10, 0), false, "move_up_10", 10, "Moves the cursor up ten lines.", 30, "../code/custom/4coder_base_commands.cpp", 39, 345 },
{ PROC_LINKS(move_up_to_blank_line, 0), false, "move_up_to_blank_line", 21, "Seeks the cursor up to the next blank line.", 43, "../code/custom/4coder_base_commands.cpp", 39, 404 },
{ PROC_LINKS(move_up_to_blank_line_end, 0), false, "move_up_to_blank_line_end", 25, "Seeks the cursor up to the next blank line and places it at the end of the line.", 80, "../code/custom/4coder_base_commands.cpp", 39, 428 },
{ PROC_LINKS(move_up_to_blank_line_skip_whitespace, 0), false, "move_up_to_blank_line_skip_whitespace", 37, "Seeks the cursor up to the next blank line and places it at the end of the line.", 80, "../code/custom/4coder_base_commands.cpp", 39, 416 },
{ PROC_LINKS(multi_paste, 0), false, "multi_paste", 11, "Paste multiple entries from the clipboard at once", 49, "../code/custom/4coder_clipboard.cpp", 35, 224 },
{ PROC_LINKS(multi_paste_interactive, 0), false, "multi_paste_interactive", 23, "Paste multiple lines from the clipboard history, controlled with arrow keys", 75, "../code/custom/4coder_clipboard.cpp", 35, 366 },
{ PROC_LINKS(multi_paste_interactive_quick, 0), false, "multi_paste_interactive_quick", 29, "Paste multiple lines from the clipboard history, controlled by inputing the number of lines to paste", 100, "../code/custom/4coder_clipboard.cpp", 35, 375 },
{ PROC_LINKS(open_all_code, 0), false, "open_all_code", 13, "Open all code in the current directory. File types are determined by extensions. An extension is considered code based on the extensions specified in 4coder.config.", 164, "../code/custom/4coder_project_commands.cpp", 42, 850 },
{ PROC_LINKS(open_all_code_recursive, 0), false, "open_all_code_recursive", 23, "Works as open_all_code but also runs in all subdirectories.", 59, "../code/custom/4coder_project_commands.cpp", 42, 856 },
{ PROC_LINKS(open_file_in_quotes, 0), false, "open_file_in_quotes", 19, "Reads a filename from surrounding '\"' characters and attempts to open the corresponding file.", 94, "../code/custom/4coder_base_commands.cpp", 39, 1617 },
{ PROC_LINKS(open_in_other, 0), false, "open_in_other", 13, "Interactively opens a file in the other panel.", 46, "../code/custom/4coder_base_commands.cpp", 39, 2048 },
{ PROC_LINKS(open_long_braces, 0), false, "open_long_braces", 16, "At the cursor, insert a '{' and '}' separated by a blank line.", 62, "../code/custom/4coder_combined_write_commands.cpp", 49, 46 },
{ PROC_LINKS(open_long_braces_break, 0), false, "open_long_braces_break", 22, "At the cursor, insert a '{' and '}break;' separated by a blank line.", 68, "../code/custom/4coder_combined_write_commands.cpp", 49, 62 },
{ PROC_LINKS(open_long_braces_semicolon, 0), false, "open_long_braces_semicolon", 26, "At the cursor, insert a '{' and '};' separated by a blank line.", 63, "../code/custom/4coder_combined_write_commands.cpp", 49, 54 },
{ PROC_LINKS(open_matching_file_cpp, 0), false, "open_matching_file_cpp", 22, "If the current file is a *.cpp or *.h, attempts to open the corresponding *.h or *.cpp file in the other view.", 110, "../code/custom/4coder_base_commands.cpp", 39, 1649 },
{ PROC_LINKS(open_panel_hsplit, 0), false, "open_panel_hsplit", 17, "Create a new panel by horizontally splitting the active panel.", 62, "../code/custom/4coder_default_framework.cpp", 43, 386 },
{ PROC_LINKS(open_panel_vsplit, 0), false, "open_panel_vsplit", 17, "Create a new panel by vertically splitting the active panel.", 60, "../code/custom/4coder_default_framework.cpp", 43, 376 },
{ PROC_LINKS(page_down, 0), false, "page_down", 9, "Scrolls the view down one view height and moves the cursor down one view height.", 80, "../code/custom/4coder_base_commands.cpp", 39, 375 },
{ PROC_LINKS(page_up, 0), false, "page_up", 7, "Scrolls the view up one view height and moves the cursor up one view height.", 76, "../code/custom/4coder_base_commands.cpp", 39, 367 },
{ PROC_LINKS(paste, 0), false, "paste", 5, "At the cursor, insert the text at the top of the clipboard.", 59, "../code/custom/4coder_clipboard.cpp", 35, 127 },
{ PROC_LINKS(paste_and_indent, 0), false, "paste_and_indent", 16, "Paste from the top of clipboard and run auto-indent on the newly pasted text.", 77, "../code/custom/4coder_clipboard.cpp", 35, 202 },
{ PROC_LINKS(paste_next, 0), false, "paste_next", 10, "If the previous command was paste or paste_next, replaces the paste range with the next text down on the clipboard, otherwise operates as the paste command.", 156, "../code/custom/4coder_clipboard.cpp", 35, 161 },
{ PROC_LINKS(paste_next_and_indent, 0), false, "paste_next_and_indent", 21, "Paste the next item on the clipboard and run auto-indent on the newly pasted text.", 82, "../code/custom/4coder_clipboard.cpp", 35, 209 },
{ PROC_LINKS(place_in_scope, 0), false, "place_in_scope", 14, "Wraps the code contained in the range between cursor and mark with a new curly brace scope.", 91, "../code/custom/4coder_scope_commands.cpp", 40, 106 },
{ PROC_LINKS(play_with_a_counter, 0), false, "play_with_a_counter", 19, "Example of query bar", 20, "../code/custom/4coder_examples.cpp", 34, 29 },
{ PROC_LINKS(profile_clear, 0), false, "profile_clear", 13, "Clear all profiling information from 4coder's self profiler.", 60, "../code/custom/4coder_profile.cpp", 33, 226 },
{ PROC_LINKS(profile_disable, 0), false, "profile_disable", 15, "Prevent 4coder's self profiler from gathering new profiling information.", 72, "../code/custom/4coder_profile.cpp", 33, 219 },
{ PROC_LINKS(profile_enable, 0), false, "profile_enable", 14, "Allow 4coder's self profiler to gather new profiling information.", 65, "../code/custom/4coder_profile.cpp", 33, 212 },
{ PROC_LINKS(profile_inspect, 0), true, "profile_inspect", 15, "Inspect all currently collected profiling information in 4coder's self profiler.", 80, "../code/custom/4coder_profile_inspect.cpp", 41, 886 },
{ PROC_LINKS(project_command_lister, 0), false, "project_command_lister", 22, "Open a lister of all commands in the currently loaded project.", 62, "../code/custom/4coder_project_commands.cpp", 42, 1290 },
{ PROC_LINKS(project_fkey_command, 0), false, "project_fkey_command", 20, "Run an 'fkey command' configured in a project.4coder file.  Determines the index of the 'fkey command' by which function key or numeric key was pressed to trigger the command.", 175, "../code/custom/4coder_project_commands.cpp", 42, 872 },
{ PROC_LINKS(project_go_to_root_directory, 0), false, "project_go_to_root_directory", 28, "Changes 4coder's hot directory to the root directory of the currently loaded project. With no loaded project nothing hapepns.", 125, "../code/custom/4coder_project_commands.cpp", 42, 898 },
{ PROC_LINKS(query_replace, 0), false, "query_replace", 13, "Queries the user for two strings, and incrementally replaces every occurence of the first string with the second string.", 120, "../code/custom/4coder_base_commands.cpp", 39, 1279 },
{ PROC_LINKS(query_replace_identifier, 0), false, "query_replace_identifier", 24, "Queries the user for a string, and incrementally replace every occurence of the word or token found at the cursor with the specified string.", 140, "../code/custom/4coder_base_commands.cpp", 39, 1300 },
{ PROC_LINKS(query_replace_selection, 0), false, "query_replace_selection", 23, "Queries the user for a string, and incrementally replace every occurence of the string found in the selected range with the specified string.", 141, "../code/custom/4coder_base_commands.cpp", 39, 1316 },
{ PROC_LINKS(quick_swap_buffer, 0), false, "quick_swap_buffer", 17, "Change to the most recently used buffer in this view - or to the top of the buffer stack if the most recent doesn't exist anymore", 129, "../code/custom/4coder_base_commands.cpp", 39, 1696 },
{ PROC_LINKS(redo, 0), false, "redo", 4, "Advances forwards through the undo history of the current buffer.", 65, "../code/custom/4coder_base_commands.cpp", 39, 1875 },
{ PROC_LINKS(redo_all_buffers, 0), false, "redo_all_buffers", 16, "Advances forward through the undo history in the buffer containing the most recent regular edit.", 96, "../code/custom/4coder_base_commands.cpp", 39, 1972 },
{ PROC_LINKS(rename_file_query, 0), false, "rename_file_query", 17, "Queries the user for a new name and renames the file of the current buffer, altering the buffer's name too.", 107, "../code/custom/4coder_base_commands.cpp", 39, 1457 },
{ PROC_LINKS(reopen, 0), false, "reopen", 6, "Reopen the current buffer from the hard drive.", 46, "../code/custom/4coder_base_commands.cpp", 39, 1734 },
{ PROC_LINKS(replace_in_all_buffers, 0), false, "replace_in_all_buffers", 22, "Queries the user for a needle and string. Replaces all occurences of needle with string in all editable buffers.", 112, "../code/custom/4coder_base_commands.cpp", 39, 1189 },
{ PROC_LINKS(replace_in_buffer, 0), false, "replace_in_buffer", 17, "Queries the user for a needle and string. Replaces all occurences of needle with string in the active buffer.", 109, "../code/custom/4coder_base_commands.cpp", 39, 1180 },
{ PROC_LINKS(replace_in_range, 0), false, "replace_in_range", 16, "Queries the user for a needle and string. Replaces all occurences of needle with string in the range between cursor and the mark in the active buffer.", 150, "../code/custom/4coder_base_commands.cpp", 39, 1171 },
{ PROC_LINKS(reverse_search, 0), false, "reverse_search", 14, "Begins an incremental search up through the current buffer for a user specified string.", 87, "../code/custom/4coder_base_commands.cpp", 39, 1112 },
{ PROC_LINKS(reverse_search_identifier, 0), false, "reverse_search_identifier", 25, "Begins an incremental search up through the current buffer for the word or token under the cursor.", 98, "../code/custom/4coder_base_commands.cpp", 39, 1124 },
{ PROC_LINKS(save, 0), false, "save", 4, "Saves the current buffer.", 25, "../code/custom/4coder_base_commands.cpp", 39, 1724 },
{ PROC_LINKS(save_all_dirty_buffers, 0), false, "save_all_dirty_buffers", 22, "Saves all buffers marked dirty (showing the '*' indicator).", 59, "../code/custom/4coder_default_framework.cpp", 43, 458 },
{ PROC_LINKS(save_to_query, 0), false, "save_to_query", 13, "Queries the user for a file name and saves the contents of the current buffer, altering the buffer's name too.", 110, "../code/custom/4coder_base_commands.cpp", 39, 1424 },
{ PROC_LINKS(search, 0), false, "search", 6, "Begins an incremental search down through the current buffer for a user specified string.", 89, "../code/custom/4coder_base_commands.cpp", 39, 1106 },
{ PROC_LINKS(search_identifier, 0), false, "search_identifier", 17, "Begins an incremental search down through the current buffer for the word or token under the cursor.", 100, "../code/custom/4coder_base_commands.cpp", 39, 1118 },
{ PROC_LINKS(seek_beginning_of_line, 0), false, "seek_beginning_of_line", 22, "Seeks the cursor to the beginning of the visual line.", 53, "../code/custom/4coder_helper.cpp", 32, 2233 },
{ PROC_LINKS(seek_beginning_of_textual_line, 0), false, "seek_beginning_of_textual_line", 30, "Seeks the cursor to the beginning of the line across all text.", 62, "../code/custom/4coder_helper.cpp", 32, 2221 },
{ PROC_LINKS(seek_end_of_line, 0), false, "seek_end_of_line", 16, "Seeks the cursor to the end of the visual line.", 47, "../code/custom/4coder_helper.cpp", 32, 2239 },
{ PROC_LINKS(seek_end_of_textual_line, 0), false, "seek_end_of_textual_line", 24, "Seeks the cursor to the end of the line across all text.", 56, "../code/custom/4coder_helper.cpp", 32, 2227 },
{ PROC_LINKS(select_all, 0), false, "select_all", 10, "Puts the cursor at the top of the file, and the mark at the bottom of the file.", 79, "../code/custom/4coder_base_commands.cpp", 39, 540 },
{ PROC_LINKS(select_next_scope_absolute, 0), false, "select_next_scope_absolute", 26, "Finds the first scope started by '{' after the cursor and puts the cursor and mark on the '{' and '}'.", 102, "../code/custom/4coder_scope_commands.cpp", 40, 57 },
{ PROC_LINKS(select_next_scope_after_current, 0), false, "select_next_scope_after_current", 31, "If a scope is selected, find first scope that starts after the selected scope. Otherwise find the first scope that starts after the cursor.", 139, "../code/custom/4coder_scope_commands.cpp", 40, 66 },
{ PROC_LINKS(select_prev_scope_absolute, 0), false, "select_prev_scope_absolute", 26, "Finds the first scope started by '{' before the cursor and puts the cursor and mark on the '{' and '}'.", 103, "../code/custom/4coder_scope_commands.cpp", 40, 82 },
{ PROC_LINKS(select_prev_top_most_scope, 0), false, "select_prev_top_most_scope", 26, "Finds the first scope that starts before the cursor, then finds the top most scope that contains that scope.", 108, "../code/custom/4coder_scope_commands.cpp", 40, 99 },
{ PROC_LINKS(select_surrounding_scope, 0), false, "select_surrounding_scope", 24, "Finds the scope enclosed by '{' '}' surrounding the cursor and puts the cursor and mark on the '{' and '}'.", 107, "../code/custom/4coder_scope_commands.cpp", 40, 27 },
{ PROC_LINKS(select_surrounding_scope_maximal, 0), false, "select_surrounding_scope_maximal", 32, "Selects the top-most scope that surrounds the cursor.", 53, "../code/custom/4coder_scope_commands.cpp", 40, 39 },
{ PROC_LINKS(set_eol_mode_from_contents, 0), false, "set_eol_mode_from_contents", 26, "Sets the buffer's line ending mode to match the contents of the buffer.", 71, "../code/custom/4coder_eol.cpp", 29, 125 },
{ PROC_LINKS(set_eol_mode_to_binary, 0), false, "set_eol_mode_to_binary", 22, "Puts the buffer in bin line ending mode.", 40, "../code/custom/4coder_eol.cpp", 29, 112 },
{ PROC_LINKS(set_eol_mode_to_crlf, 0), false, "set_eol_mode_to_crlf", 20, "Puts the buffer in crlf line ending mode.", 41, "../code/custom/4coder_eol.cpp", 29, 86 },
{ PROC_LINKS(set_eol_mode_to_lf, 0), false, "set_eol_mode_to_lf", 18, "Puts the buffer in lf line ending mode.", 39, "../code/custom/4coder_eol.cpp", 29, 99 },
{ PROC_LINKS(set_face_size, 0), false, "set_face_size", 13, "Set face size of the face used by the current buffer.", 53, "../code/custom/4coder_base_commands.cpp", 39, 725 },
{ PROC_LINKS(set_face_size_this_buffer, 0), false, "set_face_size_this_buffer", 25, "Set face size of the face used by the current buffer; if any other buffers are using the same face a new face is created so that only this buffer is effected", 157, "../code/custom/4coder_base_commands.cpp", 39, 767 },
{ PROC_LINKS(set_mark, 0), false, "set_mark", 8, "Sets the mark to the current position of the cursor.", 52, "../code/custom/4coder_base_commands.cpp", 39, 115 },
{ PROC_LINKS(set_mode_to_notepad_like, 0), false, "set_mode_to_notepad_like", 24, "Sets the edit mode to Notepad like.", 35, "../code/custom/4coder_default_framework.cpp", 43, 503 },
{ PROC_LINKS(set_mode_to_original, 0), false, "set_mode_to_original", 20, "Sets the edit mode to 4coder original.", 38, "../code/custom/4coder_default_framework.cpp", 43, 497 },
{ PROC_LINKS(setup_build_bat, 0), false, "setup_build_bat", 15, "Queries the user for several configuration options and initializes a new build batch script.", 92, "../code/custom/4coder_project_commands.cpp", 42, 1239 },
{ PROC_LINKS(setup_build_bat_and_sh, 0), false, "setup_build_bat_and_sh", 22, "Queries the user for several configuration options and initializes a new build batch script.", 92, "../code/custom/4coder_project_commands.cpp", 42, 1251 },
{ PROC_LINKS(setup_build_sh, 0), false, "setup_build_sh", 14, "Queries the user for several configuration options and initializes a new build shell script.", 92, "../code/custom/4coder_project_commands.cpp", 42, 1245 },
{ PROC_LINKS(setup_new_project, 0), false, "setup_new_project", 17, "Queries the user for several configuration options and initializes a new 4coder project with build scripts for every OS.", 120, "../code/custom/4coder_project_commands.cpp", 42, 1232 },
{ PROC_LINKS(show_filebar, 0), false, "show_filebar", 12, "Sets the current view to show it's filebar.", 43, "../code/custom/4coder_base_commands.cpp", 39, 696 },
{ PROC_LINKS(show_scrollbar, 0), false, "show_scrollbar", 14, "Sets the current view to show it's scrollbar.", 45, "../code/custom/4coder_base_commands.cpp", 39, 682 },
{ PROC_LINKS(show_the_log_graph, 0), true, "show_the_log_graph", 18, "Parses *log* and displays the 'log graph' UI", 44, "../code/custom/4coder_log_parser.cpp", 36, 993 },
{ PROC_LINKS(snipe_backward_whitespace_or_token_boundary, 0), false, "snipe_backward_whitespace_or_token_boundary", 43, "Delete a single, whole token on or to the left of the cursor and post it to the clipboard.", 90, "../code/custom/4coder_base_commands.cpp", 39, 177 },
{ PROC_LINKS(snipe_forward_whitespace_or_token_boundary, 0), false, "snipe_forward_whitespace_or_token_boundary", 42, "Delete a single, whole token on or to the right of the cursor and post it to the clipboard.", 91, "../code/custom/4coder_base_commands.cpp", 39, 185 },
{ PROC_LINKS(snippet_lister, 0), true, "snippet_lister", 14, "Opens a snippet lister for inserting whole pre-written snippets of text.", 72, "../code/custom/4coder_combined_write_commands.cpp", 49, 237 },
{ PROC_LINKS(string_repeat, 0), false, "string_repeat", 13, "Example of query_user_string and query_user_number", 50, "../code/custom/4coder_examples.cpp", 34, 179 },
{ PROC_LINKS(suppress_mouse, 0), false, "suppress_mouse", 14, "Hides the mouse and causes all mosue input (clicks, position, wheel) to be ignored.", 83, "../code/custom/4coder_default_framework.cpp", 43, 479 },
{ PROC_LINKS(swap_panels, 0), false, "swap_panels", 11, "Swaps the active panel with it's sibling.", 41, "../code/custom/4coder_base_commands.cpp", 39, 1674 },
{ PROC_LINKS(test_the_new_api, 0), false, "test_the_new_api", 16, "If you are reading this I forgot to delete this test, please let me know", 72, "../code/custom/4coder_examples.cpp", 34, 212 },
{ PROC_LINKS(theme_lister, 0), true, "theme_lister", 12, "Opens an interactive list of all registered themes.", 51, "../code/custom/4coder_lists.cpp", 31, 784 },
{ PROC_LINKS(to_lowercase, 0), false, "to_lowercase", 12, "Converts all ascii text in the range between the cursor and the mark to lowercase.", 82, "../code/custom/4coder_base_commands.cpp", 39, 566 },
{ PROC_LINKS(to_uppercase, 0), false, "to_uppercase", 12, "Converts all ascii text in the range between the cursor and the mark to uppercase.", 82, "../code/custom/4coder_base_commands.cpp", 39, 553 },
{ PROC_LINKS(toggle_filebar, 0), false, "toggle_filebar", 14, "Toggles the visibility status of the current view's filebar.", 60, "../code/custom/4coder_base_commands.cpp", 39, 710 },
{ PROC_LINKS(toggle_fps_meter, 0), false, "toggle_fps_meter", 16, "Toggles the visibility of the FPS performance meter", 51, "../code/custom/4coder_base_commands.cpp", 39, 719 },
{ PROC_LINKS(toggle_fullscreen, 0), false, "toggle_fullscreen", 17, "Toggle fullscreen mode on or off.  The change(s) do not take effect until the next frame.", 89, "../code/custom/4coder_default_framework.cpp", 43, 527 },
{ PROC_LINKS(toggle_highlight_enclosing_scopes, 0), false, "toggle_highlight_enclosing_scopes", 33, "In code files scopes surrounding the cursor are highlighted with distinguishing colors.", 87, "../code/custom/4coder_default_framework.cpp", 43, 515 },
{ PROC_LINKS(toggle_highlight_line_at_cursor, 0), false, "toggle_highlight_line_at_cursor", 31, "Toggles the line highlight at the cursor.", 41, "../code/custom/4coder_default_framework.cpp", 43, 509 },
{ PROC_LINKS(toggle_line_numbers, 0), false, "toggle_line_numbers", 19, "Toggles the left margin line numbers.", 37, "../code/custom/4coder_base_commands.cpp", 39, 824 },
{ PROC_LINKS(toggle_line_wrap, 0), false, "toggle_line_wrap", 16, "Toggles the line wrap setting on this buffer.", 45, "../code/custom/4coder_base_commands.cpp", 39, 830 },
{ PROC_LINKS(toggle_mouse, 0), false, "toggle_mouse", 12, "Toggles the mouse suppression mode, see suppress_mouse and allow_mouse.", 71, "../code/custom/4coder_default_framework.cpp", 43, 491 },
{ PROC_LINKS(toggle_paren_matching_helper, 0), false, "toggle_paren_matching_helper", 28, "In code files matching parentheses pairs are colored with distinguishing colors.", 80, "../code/custom/4coder_default_framework.cpp", 43, 521 },
{ PROC_LINKS(toggle_show_whitespace, 0), false, "toggle_show_whitespace", 22, "Toggles the current buffer's whitespace visibility status.", 58, "../code/custom/4coder_base_commands.cpp", 39, 815 },
{ PROC_LINKS(toggle_virtual_whitespace, 0), false, "toggle_virtual_whitespace", 25, "Toggles virtual whitespace for all files.", 41, "../code/custom/4coder_code_index.cpp", 36, 1176 },
{ PROC_LINKS(tutorial_maximize, 0), false, "tutorial_maximize", 17, "Expand the tutorial window", 26, "../code/custom/4coder_tutorial.cpp", 34, 20 },
{ PROC_LINKS(tutorial_minimize, 0), false, "tutorial_minimize", 17, "Shrink the tutorial window", 26, "../code/custom/4coder_tutorial.cpp", 34, 34 },
{ PROC_LINKS(uncomment_line, 0), false, "uncomment_line", 14, "If present, delete '//' at the beginning of the line after leading whitespace.", 78, "../code/custom/4coder_combined_write_commands.cpp", 49, 137 },
{ PROC_LINKS(undo, 0), false, "undo", 4, "Advances backwards through the undo history of the current buffer.", 66, "../code/custom/4coder_base_commands.cpp", 39, 1824 },
{ PROC_LINKS(undo_all_buffers, 0), false, "undo_all_buffers", 16, "Advances backward through the undo history in the buffer containing the most recent regular edit.", 97, "../code/custom/4coder_base_commands.cpp", 39, 1901 },
{ PROC_LINKS(view_buffer_other_panel, 0), false, "view_buffer_other_panel", 23, "Set the other non-active panel to view the buffer that the active panel views, and switch to that panel.", 104, "../code/custom/4coder_base_commands.cpp", 39, 1662 },
{ PROC_LINKS(view_jump_list_with_lister, 0), false, "view_jump_list_with_lister", 26, "When executed on a buffer with jumps, creates a persistent lister for all the jumps", 83, "../code/custom/4coder_jump_lister.cpp", 37, 59 },
{ PROC_LINKS(word_complete, 0), false, "word_complete", 13, "Iteratively tries completing the word to the left of the cursor with other words in open buffers that have the same prefix string.", 130, "../code/custom/4coder_search.cpp", 32, 430 },
{ PROC_LINKS(word_complete_drop_down, 0), false, "word_complete_drop_down", 23, "Word complete with drop down menu.", 34, "../code/custom/4coder_search.cpp", 32, 677 },
{ PROC_LINKS(write_block, 0), false, "write_block", 11, "At the cursor, insert a block comment.", 38, "../code/custom/4coder_combined_write_commands.cpp", 49, 94 },
{ PROC_LINKS(write_hack, 0), false, "write_hack", 10, "At the cursor, insert a '// HACK' comment, includes user name if it was specified in config.4coder.", 99, "../code/custom/4coder_combined_write_commands.cpp", 49, 82 },
{ PROC_LINKS(write_note, 0), false, "write_note", 10, "At the cursor, insert a '// NOTE' comment, includes user name if it was specified in config.4coder.", 99, "../code/custom/4coder_combined_write_commands.cpp", 49, 88 },
{ PROC_LINKS(write_space, 0), false, "write_space", 11, "Inserts a space.", 16, "../code/custom/4coder_base_commands.cpp", 39, 67 },
{ PROC_LINKS(write_text_and_auto_indent, 0), false, "write_text_and_auto_indent", 26, "Inserts text and auto-indents the line on which the cursor sits if any of the text contains 'layout punctuation' such as ;:{}()[]# and new lines.", 145, "../code/custom/4coder_auto_indent.cpp", 37, 437 },
{ PROC_LINKS(write_text_input, 0), false, "write_text_input", 16, "Inserts whatever text was used to trigger this command.", 55, "../code/custom/4coder_base_commands.cpp", 39, 59 },
{ PROC_LINKS(write_todo, 0), false, "write_todo", 10, "At the cursor, insert a '// TODO' comment, includes user name if it was specified in config.4coder.", 99, "../code/custom/4coder_combined_write_commands.cpp", 49, 76 },
{ PROC_LINKS(write_underscore, 0), false, "write_underscore", 16, "Inserts an underscore.", 22, "../code/custom/4coder_base_commands.cpp", 39, 73 },
{ PROC_LINKS(write_zero_struct, 0), false, "write_zero_struct", 17, "At the cursor, insert a ' = {};'.", 33, "../code/custom/4coder_combined_write_commands.cpp", 49, 100 },
};
static i32 fcoder_metacmd_ID_allow_mouse = 0;
static i32 fcoder_metacmd_ID_auto_indent_line_at_cursor = 1;
static i32 fcoder_metacmd_ID_auto_indent_range = 2;
static i32 fcoder_metacmd_ID_auto_indent_whole_file = 3;
static i32 fcoder_metacmd_ID_backspace_alpha_numeric_boundary = 4;
static i32 fcoder_metacmd_ID_backspace_char = 5;
static i32 fcoder_metacmd_ID_basic_change_active_panel = 6;
static i32 fcoder_metacmd_ID_begin_clipboard_collection_mode = 7;
static i32 fcoder_metacmd_ID_build_in_build_panel = 8;
static i32 fcoder_metacmd_ID_build_search = 9;
static i32 fcoder_metacmd_ID_center_view = 10;
static i32 fcoder_metacmd_ID_change_active_panel = 11;
static i32 fcoder_metacmd_ID_change_active_panel_backwards = 12;
static i32 fcoder_metacmd_ID_change_to_build_panel = 13;
static i32 fcoder_metacmd_ID_clean_all_lines = 14;
static i32 fcoder_metacmd_ID_clean_trailing_whitespace = 15;
static i32 fcoder_metacmd_ID_clear_all_themes = 16;
static i32 fcoder_metacmd_ID_clear_clipboard = 17;
static i32 fcoder_metacmd_ID_click_set_cursor = 18;
static i32 fcoder_metacmd_ID_click_set_cursor_and_mark = 19;
static i32 fcoder_metacmd_ID_click_set_cursor_if_lbutton = 20;
static i32 fcoder_metacmd_ID_click_set_mark = 21;
static i32 fcoder_metacmd_ID_clipboard_record_clip = 22;
static i32 fcoder_metacmd_ID_close_all_code = 23;
static i32 fcoder_metacmd_ID_close_build_panel = 24;
static i32 fcoder_metacmd_ID_close_panel = 25;
static i32 fcoder_metacmd_ID_command_documentation = 26;
static i32 fcoder_metacmd_ID_command_lister = 27;
static i32 fcoder_metacmd_ID_comment_line = 28;
static i32 fcoder_metacmd_ID_comment_line_toggle = 29;
static i32 fcoder_metacmd_ID_copy = 30;
static i32 fcoder_metacmd_ID_cursor_mark_swap = 31;
static i32 fcoder_metacmd_ID_custom_api_documentation = 32;
static i32 fcoder_metacmd_ID_cut = 33;
static i32 fcoder_metacmd_ID_decrease_face_size = 34;
static i32 fcoder_metacmd_ID_default_file_externally_modified = 35;
static i32 fcoder_metacmd_ID_default_startup = 36;
static i32 fcoder_metacmd_ID_default_try_exit = 37;
static i32 fcoder_metacmd_ID_default_view_input_handler = 38;
static i32 fcoder_metacmd_ID_delete_alpha_numeric_boundary = 39;
static i32 fcoder_metacmd_ID_delete_char = 40;
static i32 fcoder_metacmd_ID_delete_current_scope = 41;
static i32 fcoder_metacmd_ID_delete_file_query = 42;
static i32 fcoder_metacmd_ID_delete_line = 43;
static i32 fcoder_metacmd_ID_delete_range = 44;
static i32 fcoder_metacmd_ID_display_key_codes = 45;
static i32 fcoder_metacmd_ID_display_text_input = 46;
static i32 fcoder_metacmd_ID_double_backspace = 47;
static i32 fcoder_metacmd_ID_duplicate_line = 48;
static i32 fcoder_metacmd_ID_execute_any_cli = 49;
static i32 fcoder_metacmd_ID_execute_previous_cli = 50;
static i32 fcoder_metacmd_ID_exit_4coder = 51;
static i32 fcoder_metacmd_ID_goto_beginning_of_file = 52;
static i32 fcoder_metacmd_ID_goto_end_of_file = 53;
static i32 fcoder_metacmd_ID_goto_first_jump = 54;
static i32 fcoder_metacmd_ID_goto_first_jump_same_panel_sticky = 55;
static i32 fcoder_metacmd_ID_goto_jump_at_cursor = 56;
static i32 fcoder_metacmd_ID_goto_jump_at_cursor_same_panel = 57;
static i32 fcoder_metacmd_ID_goto_line = 58;
static i32 fcoder_metacmd_ID_goto_next_jump = 59;
static i32 fcoder_metacmd_ID_goto_next_jump_no_skips = 60;
static i32 fcoder_metacmd_ID_goto_prev_jump = 61;
static i32 fcoder_metacmd_ID_goto_prev_jump_no_skips = 62;
static i32 fcoder_metacmd_ID_hide_filebar = 63;
static i32 fcoder_metacmd_ID_hide_scrollbar = 64;
static i32 fcoder_metacmd_ID_hms_demo_tutorial = 65;
static i32 fcoder_metacmd_ID_if0_off = 66;
static i32 fcoder_metacmd_ID_if_read_only_goto_position = 67;
static i32 fcoder_metacmd_ID_if_read_only_goto_position_same_panel = 68;
static i32 fcoder_metacmd_ID_increase_face_size = 69;
static i32 fcoder_metacmd_ID_interactive_kill_buffer = 70;
static i32 fcoder_metacmd_ID_interactive_new = 71;
static i32 fcoder_metacmd_ID_interactive_open = 72;
static i32 fcoder_metacmd_ID_interactive_open_or_new = 73;
static i32 fcoder_metacmd_ID_interactive_switch_buffer = 74;
static i32 fcoder_metacmd_ID_jump_to_definition = 75;
static i32 fcoder_metacmd_ID_jump_to_definition_at_cursor = 76;
static i32 fcoder_metacmd_ID_jump_to_last_point = 77;
static i32 fcoder_metacmd_ID_keyboard_macro_finish_recording = 78;
static i32 fcoder_metacmd_ID_keyboard_macro_replay = 79;
static i32 fcoder_metacmd_ID_keyboard_macro_start_recording = 80;
static i32 fcoder_metacmd_ID_kill_buffer = 81;
static i32 fcoder_metacmd_ID_kill_tutorial = 82;
static i32 fcoder_metacmd_ID_left_adjust_view = 83;
static i32 fcoder_metacmd_ID_list_all_functions_all_buffers = 84;
static i32 fcoder_metacmd_ID_list_all_functions_all_buffers_lister = 85;
static i32 fcoder_metacmd_ID_list_all_functions_current_buffer = 86;
static i32 fcoder_metacmd_ID_list_all_functions_current_buffer_lister = 87;
static i32 fcoder_metacmd_ID_list_all_locations = 88;
static i32 fcoder_metacmd_ID_list_all_locations_case_insensitive = 89;
static i32 fcoder_metacmd_ID_list_all_locations_of_identifier = 90;
static i32 fcoder_metacmd_ID_list_all_locations_of_identifier_case_insensitive = 91;
static i32 fcoder_metacmd_ID_list_all_locations_of_selection = 92;
static i32 fcoder_metacmd_ID_list_all_locations_of_selection_case_insensitive = 93;
static i32 fcoder_metacmd_ID_list_all_locations_of_type_definition = 94;
static i32 fcoder_metacmd_ID_list_all_locations_of_type_definition_of_identifier = 95;
static i32 fcoder_metacmd_ID_list_all_substring_locations = 96;
static i32 fcoder_metacmd_ID_list_all_substring_locations_case_insensitive = 97;
static i32 fcoder_metacmd_ID_load_project = 98;
static i32 fcoder_metacmd_ID_load_theme_current_buffer = 99;
static i32 fcoder_metacmd_ID_load_themes_default_folder = 100;
static i32 fcoder_metacmd_ID_load_themes_hot_directory = 101;
static i32 fcoder_metacmd_ID_make_directory_query = 102;
static i32 fcoder_metacmd_ID_miblo_decrement_basic = 103;
static i32 fcoder_metacmd_ID_miblo_decrement_time_stamp = 104;
static i32 fcoder_metacmd_ID_miblo_decrement_time_stamp_minute = 105;
static i32 fcoder_metacmd_ID_miblo_increment_basic = 106;
static i32 fcoder_metacmd_ID_miblo_increment_time_stamp = 107;
static i32 fcoder_metacmd_ID_miblo_increment_time_stamp_minute = 108;
static i32 fcoder_metacmd_ID_mouse_wheel_change_face_size = 109;
static i32 fcoder_metacmd_ID_mouse_wheel_scroll = 110;
static i32 fcoder_metacmd_ID_move_down = 111;
static i32 fcoder_metacmd_ID_move_down_10 = 112;
static i32 fcoder_metacmd_ID_move_down_textual = 113;
static i32 fcoder_metacmd_ID_move_down_to_blank_line = 114;
static i32 fcoder_metacmd_ID_move_down_to_blank_line_end = 115;
static i32 fcoder_metacmd_ID_move_down_to_blank_line_skip_whitespace = 116;
static i32 fcoder_metacmd_ID_move_left = 117;
static i32 fcoder_metacmd_ID_move_left_alpha_numeric_boundary = 118;
static i32 fcoder_metacmd_ID_move_left_alpha_numeric_or_camel_boundary = 119;
static i32 fcoder_metacmd_ID_move_left_token_boundary = 120;
static i32 fcoder_metacmd_ID_move_left_whitespace_boundary = 121;
static i32 fcoder_metacmd_ID_move_left_whitespace_or_token_boundary = 122;
static i32 fcoder_metacmd_ID_move_line_down = 123;
static i32 fcoder_metacmd_ID_move_line_up = 124;
static i32 fcoder_metacmd_ID_move_right = 125;
static i32 fcoder_metacmd_ID_move_right_alpha_numeric_boundary = 126;
static i32 fcoder_metacmd_ID_move_right_alpha_numeric_or_camel_boundary = 127;
static i32 fcoder_metacmd_ID_move_right_token_boundary = 128;
static i32 fcoder_metacmd_ID_move_right_whitespace_boundary = 129;
static i32 fcoder_metacmd_ID_move_right_whitespace_or_token_boundary = 130;
static i32 fcoder_metacmd_ID_move_up = 131;
static i32 fcoder_metacmd_ID_move_up_10 = 132;
static i32 fcoder_metacmd_ID_move_up_to_blank_line = 133;
static i32 fcoder_metacmd_ID_move_up_to_blank_line_end = 134;
static i32 fcoder_metacmd_ID_move_up_to_blank_line_skip_whitespace = 135;
static i32 fcoder_metacmd_ID_multi_paste = 136;
static i32 fcoder_metacmd_ID_multi_paste_interactive = 137;
static i32 fcoder_metacmd_ID_multi_paste_interactive_quick = 138;
static i32 fcoder_metacmd_ID_open_all_code = 139;
static i32 fcoder_metacmd_ID_open_all_code_recursive = 140;
static i32 fcoder_metacmd_ID_open_file_in_quotes = 141;
static i32 fcoder_metacmd_ID_open_in_other = 142;
static i32 fcoder_metacmd_ID_open_long_braces = 143;
static i32 fcoder_metacmd_ID_open_long_braces_break = 144;
static i32 fcoder_metacmd_ID_open_long_braces_semicolon = 145;
static i32 fcoder_metacmd_ID_open_matching_file_cpp = 146;
static i32 fcoder_metacmd_ID_open_panel_hsplit = 147;
static i32 fcoder_metacmd_ID_open_panel_vsplit = 148;
static i32 fcoder_metacmd_ID_page_down = 149;
static i32 fcoder_metacmd_ID_page_up = 150;
static i32 fcoder_metacmd_ID_paste = 151;
static i32 fcoder_metacmd_ID_paste_and_indent = 152;
static i32 fcoder_metacmd_ID_paste_next = 153;
static i32 fcoder_metacmd_ID_paste_next_and_indent = 154;
static i32 fcoder_metacmd_ID_place_in_scope = 155;
static i32 fcoder_metacmd_ID_play_with_a_counter = 156;
static i32 fcoder_metacmd_ID_profile_clear = 157;
static i32 fcoder_metacmd_ID_profile_disable = 158;
static i32 fcoder_metacmd_ID_profile_enable = 159;
static i32 fcoder_metacmd_ID_profile_inspect = 160;
static i32 fcoder_metacmd_ID_project_command_lister = 161;
static i32 fcoder_metacmd_ID_project_fkey_command = 162;
static i32 fcoder_metacmd_ID_project_go_to_root_directory = 163;
static i32 fcoder_metacmd_ID_query_replace = 164;
static i32 fcoder_metacmd_ID_query_replace_identifier = 165;
static i32 fcoder_metacmd_ID_query_replace_selection = 166;
static i32 fcoder_metacmd_ID_quick_swap_buffer = 167;
static i32 fcoder_metacmd_ID_redo = 168;
static i32 fcoder_metacmd_ID_redo_all_buffers = 169;
static i32 fcoder_metacmd_ID_rename_file_query = 170;
static i32 fcoder_metacmd_ID_reopen = 171;
static i32 fcoder_metacmd_ID_replace_in_all_buffers = 172;
static i32 fcoder_metacmd_ID_replace_in_buffer = 173;
static i32 fcoder_metacmd_ID_replace_in_range = 174;
static i32 fcoder_metacmd_ID_reverse_search = 175;
static i32 fcoder_metacmd_ID_reverse_search_identifier = 176;
static i32 fcoder_metacmd_ID_save = 177;
static i32 fcoder_metacmd_ID_save_all_dirty_buffers = 178;
static i32 fcoder_metacmd_ID_save_to_query = 179;
static i32 fcoder_metacmd_ID_search = 180;
static i32 fcoder_metacmd_ID_search_identifier = 181;
static i32 fcoder_metacmd_ID_seek_beginning_of_line = 182;
static i32 fcoder_metacmd_ID_seek_beginning_of_textual_line = 183;
static i32 fcoder_metacmd_ID_seek_end_of_line = 184;
static i32 fcoder_metacmd_ID_seek_end_of_textual_line = 185;
static i32 fcoder_metacmd_ID_select_all = 186;
static i32 fcoder_metacmd_ID_select_next_scope_absolute = 187;
static i32 fcoder_metacmd_ID_select_next_scope_after_current = 188;
static i32 fcoder_metacmd_ID_select_prev_scope_absolute = 189;
static i32 fcoder_metacmd_ID_select_prev_top_most_scope = 190;
static i32 fcoder_metacmd_ID_select_surrounding_scope = 191;
static i32 fcoder_metacmd_ID_select_surrounding_scope_maximal = 192;
static i32 fcoder_metacmd_ID_set_eol_mode_from_contents = 193;
static i32 fcoder_metacmd_ID_set_eol_mode_to_binary = 194;
static i32 fcoder_metacmd_ID_set_eol_mode_to_crlf = 195;
static i32 fcoder_metacmd_ID_set_eol_mode_to_lf = 196;
static i32 fcoder_metacmd_ID_set_face_size = 197;
static i32 fcoder_metacmd_ID_set_face_size_this_buffer = 198;
static i32 fcoder_metacmd_ID_set_mark = 199;
static i32 fcoder_metacmd_ID_set_mode_to_notepad_like = 200;
static i32 fcoder_metacmd_ID_set_mode_to_original = 201;
static i32 fcoder_metacmd_ID_setup_build_bat = 202;
static i32 fcoder_metacmd_ID_setup_build_bat_and_sh = 203;
static i32 fcoder_metacmd_ID_setup_build_sh = 204;
static i32 fcoder_metacmd_ID_setup_new_project = 205;
static i32 fcoder_metacmd_ID_show_filebar = 206;
static i32 fcoder_metacmd_ID_show_scrollbar = 207;
static i32 fcoder_metacmd_ID_show_the_log_graph = 208;
static i32 fcoder_metacmd_ID_snipe_backward_whitespace_or_token_boundary = 209;
static i32 fcoder_metacmd_ID_snipe_forward_whitespace_or_token_boundary = 210;
static i32 fcoder_metacmd_ID_snippet_lister = 211;
static i32 fcoder_metacmd_ID_string_repeat = 212;
static i32 fcoder_metacmd_ID_suppress_mouse = 213;
static i32 fcoder_metacmd_ID_swap_panels = 214;
static i32 fcoder_metacmd_ID_test_the_new_api = 215;
static i32 fcoder_metacmd_ID_theme_lister = 216;
static i32 fcoder_metacmd_ID_to_lowercase = 217;
static i32 fcoder_metacmd_ID_to_uppercase = 218;
static i32 fcoder_metacmd_ID_toggle_filebar = 219;
static i32 fcoder_metacmd_ID_toggle_fps_meter = 220;
static i32 fcoder_metacmd_ID_toggle_fullscreen = 221;
static i32 fcoder_metacmd_ID_toggle_highlight_enclosing_scopes = 222;
static i32 fcoder_metacmd_ID_toggle_highlight_line_at_cursor = 223;
static i32 fcoder_metacmd_ID_toggle_line_numbers = 224;
static i32 fcoder_metacmd_ID_toggle_line_wrap = 225;
static i32 fcoder_metacmd_ID_toggle_mouse = 226;
static i32 fcoder_metacmd_ID_toggle_paren_matching_helper = 227;
static i32 fcoder_metacmd_ID_toggle_show_whitespace = 228;
static i32 fcoder_metacmd_ID_toggle_virtual_whitespace = 229;
static i32 fcoder_metacmd_ID_tutorial_maximize = 230;
static i32 fcoder_metacmd_ID_tutorial_minimize = 231;
static i32 fcoder_metacmd_ID_uncomment_line = 232;
static i32 fcoder_metacmd_ID_undo = 233;
static i32 fcoder_metacmd_ID_undo_all_buffers = 234;
static i32 fcoder_metacmd_ID_view_buffer_other_panel = 235;
static i32 fcoder_metacmd_ID_view_jump_list_with_lister = 236;
static i32 fcoder_metacmd_ID_word_complete = 237;
static i32 fcoder_metacmd_ID_word_complete_drop_down = 238;
static i32 fcoder_metacmd_ID_write_block = 239;
static i32 fcoder_metacmd_ID_write_hack = 240;
static i32 fcoder_metacmd_ID_write_note = 241;
static i32 fcoder_metacmd_ID_write_space = 242;
static i32 fcoder_metacmd_ID_write_text_and_auto_indent = 243;
static i32 fcoder_metacmd_ID_write_text_input = 244;
static i32 fcoder_metacmd_ID_write_todo = 245;
static i32 fcoder_metacmd_ID_write_underscore = 246;
static i32 fcoder_metacmd_ID_write_zero_struct = 247;
#endif
