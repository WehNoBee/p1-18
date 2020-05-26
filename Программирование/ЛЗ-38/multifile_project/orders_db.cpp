#include <algorithm>
#include <fstream>
#include <optional>
#include "orders_db.h"

// Загрузить из файла
void orders_db::load(std::vector<Order> & v, std::string fname) 
{
    Order order;
    std::ifstream in(fname);

    char delim;
    v.clear();
    while (in >> order.order_id >> order.saler >> order.customer >>
        order.date.day >> delim >> order.date.month >> delim >> order.date.year >> order.cost)
    {
        v.push_back(order);
    }

    in.close();
}

// Выгрузить в файл
void orders_db::save(vOrders & v, std::string fname) 
{
    std::ofstream out(fname);
    
    for (orders_db::Order o : v)
    {
        out << o.order_id << '\t' << o.saler << '\t' << o.customer << '\t' << o.date.day << "." << o.date.month << "." << o.date.year << '\t' << o.cost << std::endl;
    }

    out.close();
}

// Добавить новый заказ
void orders_db::append(vOrders & v,
    std::optional<int>         order_id = std::nullopt,
    std::optional<std::string> saler = std::nullopt,
    std::optional<std::string> customer = std::nullopt,
    std::optional<Date>        date = std::nullopt,
    std::optional<double>      cost = std::nullopt)
{
    Order o;

    if (order_id.has_value())
        o.order_id = order_id.value();

    if (saler.has_value())
        o.saler = saler.value();

    if (customer.has_value())
        o.customer = customer.value();

    if (date.has_value())
        o.date = date.value();

    if (cost.has_value())
        o.cost = cost.value();

    v.push_back(o);

}

// Редактировать заказ
void orders_db::edit(vOrders & v,
    std::optional<int>         order_id = std::nullopt,
    std::optional<std::string> saler = std::nullopt,
    std::optional<std::string> customer = std::nullopt,
    std::optional<Date>        date = std::nullopt,
    std::optional<double>      cost = std::nullopt)
{
    auto res = std::find_if(v.begin(), v.end(),
                            [order_id](const Order & item) -> bool {return item.order_id == order_id;});
    if (res == v.end())
        std::runtime_error("order_id not found!");



    if (saler.has_value())
        res->saler = saler.value();

    if (customer.has_value())
        res->customer = customer.value();

    if (date.has_value())
        res->date = date.value();

    if (cost.has_value())
        res->cost = cost.value();
}

// Удалить заказ
void orders_db::del(vOrders & v, int id) {
    v.erase(v.begin()+id);
}

// // Компаратор для сортировки по убыванию суммы
// bool comp_sum (const orders_db::Saler& a, const orders_db::Saler& b) { return (a.sum > b.sum); }

// Сортировать по дате
void orders_db::sort(vOrders & v) {
    std::sort(v.begin(), v.end(),
        [](const orders_db::Order & a, const orders_db::Order & b) -> bool { return (a.cost > b.cost); });
}
