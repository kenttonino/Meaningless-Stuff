/*
 *  Author: Kent Louise G. Tonino
 *
 *  The purpose of this computer program
 *  is to demonstrate and on how to implement
 *  a Data Structures and Algorithms in C++.
 *
 * */

#include "./helpers/helpers.hpp"
#include "./linear_data_structure_array/array.hpp"
#include "./linear_data_structure_stack/stack.hpp"
#include "./linear_data_structure_linked_list/linked_list.hpp"

int main(void) {
  // Add new line at the start of the program.
  // clear_terminal();
  add_new_line();
  add_new_line();

  // Linear Data Structure: Array examples.
  // Note: Remove the comment if you want to run the program.
  // array_loop();

  // Linear Data Structure: Stack examples.
  // Note: Remove the comment if you want to run the program.
  // stack_01();

  // Linear Data Structure: Singly Linked List exmaples.
  linked_list_singly_01();

  // Add new line before the program ends.
  add_new_line();
  add_new_line();
  add_new_line();

  return 0;
}
