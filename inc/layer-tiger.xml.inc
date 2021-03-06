<Style name="tiger">
  <Rule>
    <Filter>[is_tiger] = 'yes'</Filter>
    &maxscale_zoom8;
    <LineSymbolizer stroke="#d95f02" stroke-width="0.1"/>
  </Rule>
  <Rule>
    <Filter>[is_tiger] = 'no'</Filter>
    &maxscale_zoom8;
    <LineSymbolizer stroke="#1b9e77" stroke-width="0.1"/>
  </Rule>
  <Rule>
    <Filter>[is_tiger] = 'yes'</Filter>
    &maxscale_zoom9;
    <LineSymbolizer stroke="#d95f02" stroke-width="0.3"/>
  </Rule>
  <Rule>
    <Filter>[is_tiger] = 'no'</Filter>
    &maxscale_zoom9;
    <LineSymbolizer stroke="#1b9e77" stroke-width="0.3"/>
  </Rule>
  <Rule>
    <Filter>[is_tiger] = 'yes'</Filter>
    &maxscale_zoom11;
    <LineSymbolizer stroke="#d95f02" stroke-width="0.6"/>
  </Rule>
  <Rule>
    <Filter>[is_tiger] = 'no'</Filter>
    &maxscale_zoom11;
    <LineSymbolizer stroke="#1b9e77" stroke-width="0.6"/>
  </Rule>
  <Rule>
    <Filter>[is_tiger] = 'yes'</Filter>
    &maxscale_zoom12;
    <LineSymbolizer stroke="#d95f02" stroke-width="1"/>
  </Rule>
  <Rule>
    <Filter>[is_tiger] = 'no'</Filter>
    &maxscale_zoom12;
    <LineSymbolizer stroke="#1b9e77" stroke-width="1"/>
  </Rule>
</Style>


<Layer name="roads" srs="&srs900913;">
  <StyleName>tiger</StyleName>
  <Datasource>
    <Parameter name="table">
      (select way,
        (case when osm_uid = '7168' -- DaveHansenTiger
                    and osm_timestamp::timestamp &gt;= '2007-08-03'::timestamp
                    and osm_timestamp::timestamp &lt;= '2008-05-04'::timestamp
                  then 'yes'
              when osm_uid = '15169' -- Milenko
                    and osm_timestamp::timestamp &gt;= '2007-10-29'::timestamp
                    and osm_timestamp::timestamp &lt;= '2007-12-12'::timestamp
                  then 'yes'
              when osm_uid = '20587' -- balrog-kun
                    and osm_timestamp::timestamp &gt;= '2010-03-21'::timestamp
                    and osm_timestamp::timestamp &lt;= '2010-04-08'::timestamp
                    and osm_version::int &lt; 3 -- maybe someone else edited between import and name expansion
                  then 'yes'
              else 'no' end) as is_tiger
        from &prefix;_line
        where highway is not null
        order by is_tiger desc) as roads
    </Parameter>
    &datasource-settings;
  </Datasource>
</Layer>
