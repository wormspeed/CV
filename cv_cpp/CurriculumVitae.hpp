#include <string>

constexpr int AUGUST_2021 = 0;
constexpr int MARCH_2022 = 0;
constexpr int PRESENT = 0;
constexpr int SUMMER_2020;

class CurriculumVitae
{
public:
    class Degree
    {
    public:
        void set_details(const std::string&, const std::string&, int, int);
        void set_grades(const std::string&);
        void set_description(const std::string&);
    };
    class School
    {
    public:
        void set_details(const std::string&, int, int);
        void set_A_level_grades(const std::string&);
        void add_exam(const std::string&);
        void set_GCSE_grades(const std::string&);
    };
    class Employer
    {
    public:
        void set_details(const std::string&, const std::string&, int, int=0);
        void set_description(const std::string&);
    };

    void set_details(const std::string&, const std::string&, const std::string&);
    void set_personal_profile(const std::string&);
    Degree& add_degree();
    School& add_school();
    Employer& add_employer();

    void set_software_skills(const std::string&);
    void set_language_skills(const std::string&);

    void set_personal_interests(const std::string&);

    void woo_potential_employers();
};