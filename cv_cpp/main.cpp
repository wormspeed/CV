#include "CurriculumVitae.hpp"

int main(int, char**)
{
  CurriculumVitae cv;
  cv.set_details("Sam Spedding", "samspedding+cv@hotmail.co.uk", "Bristol, UK");
  
  // ---------------- Personal Profile ---------------- //

  cv.set_personal_profile(
    "A high-achieving engineer with over three years' industry experience using modern C++, a strong mathematical background, excellent communication skills, and a diligent but playful approach to problem solving. Has a keen desire to contribute towards projects that solve tangible, real-world problems, especially those with a mathematical component.");
  
  // ---------------- Education ---------------- //

  CurriculumVitae::Degree& uni = cv.add_degree();
  uni.set_details("Mathematics (MSci, Integrated Masters)", "University of Bristol", 2017, 2021);
  uni.set_grades("First-Class Honours: Years 1 - 3 average: 86%, Year 4 Average: 89%");
  uni.set_description(
    " - Focussed on applied topics such as fluid dynamics, statistical mechanics, and general relativity.\n"
    " - Fourth-year research project: Hydrodynamics of Swimming Bacteria.\n"
    "   - Used numerical, asymptotic and exact methods for solving Stokes' fluid flow around a cylindrical bacterium, and adapted hydrodynamics of liquid crystals to model a bacterial colony.\n"
    " - Third-year research project: Simulating Crowd Dynamics.\n"
    "   - Used Python to numerically analyse data from a crowd simulation made in C++.");
  
  CurriculumVitae::School& sixthForm = cv.add_school();
  sixthForm.set_details("Hereford Sixth Form College", 2015, 2017);
  sixthForm.set_A_level_grades("A* A* A* A* in Maths, Further Maths, Physics and Spanish");
  sixthForm.add_exam("Distinction in British Mathematical Olympiad 2017 (top 250 participants nationwide)");

  CurriculumVitae::School& highSchool = cv.add_school();
  highSchool.set_details("Wigmore High School", 2010, 2015);
  highSchool.set_GCSE_grades("6 A*s (including Maths and English Language); A** (in Further Maths); 3 A's");

  // ---------------- Work Experience ---------------- //

  CurriculumVitae::Employer& datamine = cv.add_employer();
  datamine.set_details("Lead Software Engineer", "Datamine Software Ltd., Bristol", MARCH_2022, PRESENT);
  datamine.set_description(
    " - Create and maintain cutting edge geological resource modelling desktop applications using C++14.\n"
    "   - Conceptualize and implement novel algorithms for processing geological data to create accurate structural models. Created a unique interactive tool to model and visualize geological faults using field measurements.\n"
		"   - Enhance and maintain existing structural modelling tools. Refactored swathes of legacy code resulting in speedups of up to 2000% in Datamine's flagship minimum curvature implicit modelling tools.\n"
    " - Lead developer on a brand new geological resource modelling application called Studio Geo.\n"
    "   - Colaborate with the product owner to conceptualize, design and implement attractive, dynamic UI.\n"
    "   - Personally responsible for the majority of fundamental architectural and design decisions.\n"
    "   - Help delegate tasks to maximize the efficiency of the team, taking into account individual strengths of myself and other team members.\n"
    "   - Featured in the promotional product release video alongside the CTO and the VP, and represented Studio Geo at PDAC 2025 (the world's largest mining trade show) in Toronto.\n");
  
  CurriculumVitae::Employer& micro_focus = cv.add_employer();
  micro_focus.set_details("Graduate Software Engineer", "Micro Focus, Cambridge", AUGUST_2021, MARCH_2022);
  micro_focus.set_description(
    " - Self-taught C++17 and modern coding standards with minimal supervision and support.\n"
	  " - Developed tools that consume REST APIs of wide variety of online data repositories to extract both structured and unstructured data.");
  
  CurriculumVitae::Employer& maths_cafe = cv.add_employer();
  maths_cafe.set_details("APDE Maths Cafe Leader", "School of Mathematics, University of Bristol", 2019, 2021);
  maths_cafe.set_description(
    " - Ran the drop-in session for Year 2 module 'Applied Partial Differential Equations', and provided hints, tips and solutions to homework problems, as well as peer-to-peer support for students seeking advice.");
  
  CurriculumVitae::Employer& mytutor = cv.add_employer();
  mytutor.set_details("Online A-Level Maths and Further Maths Tutor", "mytutor.com", 2018, 2021);
  mytutor.set_description(
    " - Built friendly but professional relationships with tutees and their parents, scheduled and planned lessons, and tailored my teaching and communication styles to suit the needs of the pupil and build their confidence.\n"
    " - 5-star average rating from over 100 reviews from tutees, having completed over 400 lessons.");
  
  CurriculumVitae::Employer& research_studentship = cv.add_employer();
  research_studentship.set_details("Group Research Studentship", "School of Mathematics, University of Bristol", SUMMER_2020);
  research_studentship.set_description(
    " - Used Numpy and Scipy Python libraries to conduct a numerical analysis of a variety of Hamiltonian systems with applications in isomerisation dynamics, computing statistical-mechanical quantities to compare with theory.\n"
    " - Used MatPlotLib library to display high-dimensional data in new and insightful ways, including phase-space colour maps and animations of trajectories.");
  
  // ---------------- Additional Skills and Interests ---------------- //

  cv.set_software_skills(
    "Over 3 years' industry experience with C++ 14 and above. Confident using Python for various scripting, scientific computing and data visualisation purposes. Experienced user of git, Azure Devops, and Jira. Proficient in LaTeX.");

  cv.set_language_skills("Native English speaker. Intermediate level Spanish speaker.");

  cv.set_personal_interests(
    "Keen pianist and music lover, with interests spanning rock, jazz, classical and other genres. Loves books, films (espcially sci-fi), history, and science.)");
  
  cv.woo_potential_employers();
}