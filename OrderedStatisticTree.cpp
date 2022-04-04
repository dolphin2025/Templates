#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> s;
// .find_by_order(x) -> [x]
// .order_of_key(x) -> index of x (when x is inserted if it's not already in the set) aka number of elements < x
