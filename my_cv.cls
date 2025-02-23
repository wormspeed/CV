\NeedsTeXFormat{LaTeX2e}
\ProvidesClass{my_cv}
\LoadClass{article}

\RequirePackage{titlesec}
\RequirePackage{hyperref}
\usepackage[margin=1in]{geometry}
\usepackage{multicol}
\usepackage[dvipsnames]{xcolor}
\usepackage[T1]{fontenc}
\usepackage{enumitem}
\renewcommand*\familydefault{\sfdefault}


\hypersetup{
	colorlinks=true,
	linkcolor=MidnightBlue,
	citecolor=MidnightBlue,
	urlcolor=MidnightBlue,
}

\titleformat{\section}         % Customise the \section command 
{\Large\scshape\raggedright} % Make the \section headers large (\Large),
% small capitals (\scshape) and left aligned (\raggedright)
{}{0em}                      % Can be used to give a prefix to all sections, like 'Section ...'
{}                           % Can be used to insert code before the heading
[\titlerule]                 % Inserts a horizontal line after the heading

\titleformat{\subsection}
{\scshape\raggedright\bfseries}
{}{0em}
{}

\newcommand{\datedsubsection}[2]{%
	\subsection{#1 \hfill #2}%
}

\newcommand{\doubledatedsubsection}[3]{%
	\subsection{#1 \hfill #3 \\ #2\hfill}%
}
