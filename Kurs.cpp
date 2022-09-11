#include "hotel_main_classes.h"
#include "tree_class.h"
#include "hash_table_class.h"
#include "main_interface.h"



int main()
{
    HotelFacade test;
    test.Init_Data_Bases();
    test.show_all_cleaning();
    test.show_all_rooms();
    test.print_intermediate_result();

    return 0;
}

