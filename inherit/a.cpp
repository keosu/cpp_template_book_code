#include <memory>
#include <vector>

class mySharedClass : public std::enable_shared_from_this<mySharedClass> {
 public:
  // ...
};

int main() {
  std::vector<std::shared_ptr<mySharedClass>> spv;
  spv.emplace_back(new mySharedClass());
  std::shared_ptr<mySharedClass> p(new mySharedClass());
  mySharedClass &c = *p;
  spv.emplace_back(c.shared_from_this());
}