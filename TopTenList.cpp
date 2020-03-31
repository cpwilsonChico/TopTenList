//Manages a list of top ten hyperlinks
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"
#include <vector>
#include <iostream>

using std::string;
using std::cout;

TopTenList::TopTenList()
{
    _list.resize(10);	
}

void TopTenList::set_at(int index, Hyperlink link)
{
    if (index < 0 || index >= _list.size()) {
      return;
    }
    _list[index] = link;
}

void TopTenList::display_forward() {
    for (int i = 0; i < 10; i++) {
      cout << _list[i].text << "\n";
    }
}

void TopTenList::display_backward() {
    for (int i = 9; i >= 0; i--) {
      cout << _list[i].text << "\n";
    }
}

Hyperlink TopTenList::get(int index)
{
    return _list.at(index);
}
