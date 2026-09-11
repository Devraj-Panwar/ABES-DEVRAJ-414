const company = {
    first_name: "ABES",
    last_name: "Engineering College",
    age : 20,
    full_name: function() {
        return company.first_name + " " + company.last_name;
    }
};
console.log(company.full_name());
