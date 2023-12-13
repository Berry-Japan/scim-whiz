%define rel	b1

Summary:	scim-whiz is an SCIM IMEngine module for whiz
Name:		scim-whiz
Version:	0.0.1
Release:	%{rel}
Source0:	%{name}-%{version}.tar.bz2
BuildRoot:	%{_tmppath}/%{name}-%{version}-root
License:	GPL
Group:		System Environment/Libraries
Requires:	scim >= 1.0.1, whiz
BuildRequires:	scim-devel >= 1.0.1
BuildArchitectures: i586

%description
Scim-whiz is an SCIM IMEngine module for whiz.
It supports Japanese input.

%prep
%setup -q

%build
%configure --disable-static
make

%install
[ -n "%{buildroot}" -a "%{buildroot}" != / ] && rm -rf %{buildroot}

make DESTDIR=%{buildroot} install

%clean
[ -n "%{buildroot}" -a "%{buildroot}" != / ] && rm -rf %{buildroot}

%files
%defattr(-,root,root)
%{_libdir}/scim-1.0/IMEngine/*.so
#%{_libdir}/scim-1.0/SetupUI/*.so
#%{_datadir}/locale/ja/LC_MESSAGES/scim-canna.mo
%{_datadir}/scim/icons/*.png


%changelog
* Fri Jun 10 2005 Yuichiro Nakada <berry@po.yui.mine.nu>
- Create for Berry Linux
