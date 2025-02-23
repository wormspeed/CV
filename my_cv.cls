\NeedsTeXFormat{LaTeX2e}
\ProvidesClass{my_cv}
\LoadClass[9pt]{extarticle}

\RequirePackage{titlesec}
\RequirePackage{hyperref}
\usepackage{extsizes}
\usepackage[a4paper, total={6.5in, 9.5in}]{geometry}
\usepackage{multicol}
\usepackage[dvipsnames]{xcolor}
\usepackage{enumitem}
\usepackage{fontspec}
\setmonofont{Fira Code}[AutoFakeSlant = 0.25]
\renewcommand*\familydefault{\ttdefault}

\raggedright

\hypersetup{
	colorlinks=true,
	linkcolor=MidnightBlue,
	citecolor=MidnightBlue,
	urlcolor=MidnightBlue,
}

\titleformat{\section}         % Customise the \section command 
{\raggedright\bfseries\itshape}
{}{0em}
{\color{ForestGreen}// }
[\color{Black}]

\titleformat{\subsection}
{\raggedright\itshape}
{}{0em}
{}

\newcommand{\datedsubsection}[2]{%
	\subsection{#1 \hfill #2}%
}

\newcommand{\doubledatedsubsection}[3]{%
	\subsection{#1 \hfill #3 \\ #2\hfill}%
}

\renewcommand{\labelitemi}{*}
\renewcommand{\labelitemii}{->}
