//Manages a list of top ten hyperlinks
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"
#include <vector>

using std::string;

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

Hyperlink TopTenList::get(int index)
{
  return _list.at(index);
}
