#include "handler.hpp"
#define OK(connection)                                                         \
  Server.Response(connection, 200, "Ok", R"({"message":"success"})")

route("/admin/dashboard", admin_dashboard) {
  Server.SSR("public/admin/dashboard.html", connection);
  return OK(connection);
};
